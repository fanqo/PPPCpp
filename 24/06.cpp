#include "../Matrix.h"
#include "../MatrixIO.h"
#include <iostream>
#include <cmath>
#include <random>

using Matrix = Numeric_lib::Matrix<double, 2>;
using Vector = Numeric_lib::Matrix<double, 1>;
using Numeric_lib::Index;
using Numeric_lib::error;

void classical_elimination(Matrix& A, Vector& b);
Vector back_substitution(const Matrix& A, const Vector& b);

Vector operator*(const Matrix& m, const Vector& u)
{
  const Index n = m.dim1();
  Vector v(n);
  for (Index i = 0; i < n; ++i) v(i) = dot_product(m[i],u);
  return v;
}

Vector classical_gaussian_elimination(Matrix A, Vector b)
{
  classical_elimination(A, b);
  return back_substitution(A, b);
}

struct Elim_failure : std::runtime_error {
  Elim_failure(const int& i) : std::runtime_error("A(" + std::to_string(i) 
      + ", " + std::to_string(i) + ") == 0") {};
};

void classical_elimination(Matrix& A, Vector& b)
{
  const Index n = A.dim1();
  
  // traverse from 1st column to the next-to-last
  // filling zeros into all elements under the diagonal;

  for (Index j = 0; j < n-1; ++j) {
    const double pivot = A(j,j);
    if (pivot == 0) throw Elim_failure(j);

    // fill zeros into each element under the diagonal of the ith row:
    for (Index i = j+1; i < n; ++i) {
      const double mult = A(i,j)/pivot;
      A[i].slice(j) = scale_and_add(A[j].slice(j), -mult, A[i].slice(j));
      b(i) -= mult*b(j);  // make the corresponding change to b
    }
  }
}

struct Back_subst_failure : std::runtime_error {
  Back_subst_failure(const int& i) : 
    std::runtime_error("Back susbstitute failure on row " 
        + std::to_string(i)){};
};

Vector back_substitution(const Matrix& A, const Vector& b)
{
  const Index n = A.dim1();
  Vector x(n);

  for (Index i = n-1; i >= 0; --i) {
    double s = b(i) - dot_product(A[i].slice(i+1), x.slice(i+1));

    if (double m = A(i,i))
      x(i) = s/m;
    else
      throw Back_subst_failure(i);
  }

  return x;
}

void elim_with_partial_pivot(Matrix& A, Vector& b)
{
  const Index n = A.dim1();

  for (Index j = 0; j < n; ++j) {
    Index pivot_row = j;

    // look for a suitable pivot
    for (Index k = j+1; k < n; ++k) 
      if (abs(A(k,j)) > abs(A(pivot_row, j))) pivot_row = k;

    // swap the rows if we found a better pivot
    if (pivot_row != j) {
      A.swap_rows(j, pivot_row);
      std::swap(b(j), b(pivot_row));
    }

    // elimation
    for (Index i = j+1; i < n; ++i) {
      const double pivot = A(j,j);
      if (pivot == 0) error ("can't solve: pivot == 0");
      const double mult = A(i,j)/pivot;
      A[i].slice(j) = scale_and_add(A[j].slice(j), -mult, A[i].slice(j));
      b(i) -= mult*b(j);
    }
  }
}

double max = 50000;
Vector random_vector(Index n)
{
  Vector v(n);
  std::default_random_engine ran{};  // generates integers
  std::uniform_real_distribution<> ureal{0, max};  // maps ints into doubles 
  
  for (Index i = 0; i < n; ++ i)
    v(i) = ureal(ran);

  return v;
}

Matrix random_matrix(Index n)
{
  Matrix m(n, n);
  std::default_random_engine ran{};
  std::uniform_real_distribution<> ureal{0, max};

  for (Index i = 0; i < n; ++i)
    for (Index j = 0; j < n; ++j)
      m(i, j) = ureal(ran);

  return m;
}

void solve_random_system(Index n)
{
  Matrix A = random_matrix(n);
  Vector b = random_vector(n);

  std::cout << "A = " << A << '\n';
  std::cout << "b = " << b << '\n';

  try{
    Vector x = classical_gaussian_elimination(A, b);
    std::cout << "classical elim solution is x = " << x << '\n';
    Vector v = A*x;
    std::cout << "A*x = " << v << '\n';
  }
  catch(const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}

int main()
{
  solve_random_system(3);
}
