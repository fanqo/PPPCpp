#include <iostream>

using namespace std;

struct Link {
  string value;
  Link* prev;
  Link* succ;
  Link(const string& v, Link* p = nullptr, Link* s = nullptr)
    :value{v}, prev{p}, succ{s} {}
};

Link* insert(Link* p, Link* n)  // insert n before p
{
  if(n==nullptr) return p;
  if(p==nullptr) return n;
  n->succ = p;  // p comes after n
  if(p->prev) p->prev->succ = n;  // n comes after what used to be p's predecessor
  n->prev = p->prev;  // p's predecessor becomes n's predecessor
  p->prev = n;  // n becomes p's predecessor
  return n;
}

void print_all(Link* p)
{
  cout << "{ ";
  while(p) {
    cout << p->value;
    if(p = p-> succ) cout << ", ";  // not comparison, just assignment
  }
  cout << " }";
}

int main()
{
  Link* norse_gods = new Link{"Thor"};
  norse_gods = insert(norse_gods, new Link{"Odin"});
  norse_gods = insert(norse_gods, new Link{"Freia"});

  print_all(norse_gods);
  cout << '\n';
}
