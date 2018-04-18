#include <array>
#include <iostream>
#include <vector>
#include <list>


template<typename Iter1, typename Iter2>
Iter2 iter_copy(Iter1 f1, Iter1 e1, Iter2 f2)
{
  if (f1 == e1) {
    std::cout << "Nothing to copy" << std::endl;
  } else {
    Iter2 i2 = f2;
    for (Iter1 i1 = f1; i1 != e1; ++i1) {
      *i2 = *i1;
      ++i2;
    }
  }
  return f2;
}

int main()
{
  std::array<int, 10> ai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> vi {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::list<int> li {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::array<int, 10> ai2 = ai;
  std::vector<int> vi2 = vi;
  std::list<int> li2 = li;

  for (int i = 0; i < 10; ++i) {
    ai[i] += 2;
  }

  std::vector<int>::iterator pv = vi.begin();
  while (pv != vi.end()) {
    *pv += 3;
    ++pv;
  }

  std::list<int>::iterator pl = li.begin();
  while (pl != li.end()) {
    *pl += 5;
    ++pl;
  }

  iter_copy (ai.begin(), ai.end(), vi2.begin());
  iter_copy (li.begin(), li.end(), ai2.begin());

  std::vector<int>::iterator vii = 
    std::find(vi.begin(), vi.end(), 3);
  if (vii != vi.end()) {
    std::cout << "Vector has 3 at position of: " 
      << vii - vi.begin() + 1 << std::endl;
  }

}

