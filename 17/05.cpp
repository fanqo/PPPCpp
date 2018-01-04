#include <iostream>

using namespace std;

class Link {
public:
  string value;
  Link(const string& v, Link* p = nullptr, Link* s = nullptr)
    :value{v}, prev{p}, succ{s} {}

  Link* insert(Link* n);  // insert n before this object
  Link* add(Link* n);  // insert n after this object
  Link* erase();  // remove this object from list
  Link* find(const string& s);  // find s in list
  const Link* find(const string& s) const; // find s in const list
  Link* advance(int n) const;  // move n positions in list

  Link* next() const { return succ; }
  Link* previous() const { return prev; }
private:
  Link* prev;
  Link* succ;
};

Link* Link::insert(Link* n)  // insert n before this object; return n
{
  if(n==nullptr) return this;
  if(this==nullptr) return n;
  n->succ = this;  // this object comes after n
  if(prev) prev->succ = n;  // n comes after what used to be this's predecessor
  n->prev = prev;  // this's predecessor becomes n's predecessor
  prev = n;  // n becomes this's predecessor
  return n;
}

Link* Link::erase()  // remove's this object from list; return it's successor
{
  if (this == nullptr) return nullptr;
  if (succ) succ->prev = prev;
  if (prev) prev->succ = succ;
  return succ;
}

Link* Link::find(const string& s)  // find s in list; return nullptr not found
{
  Link* p = this;
  while(p) {
    if (p->value == s) return p;
    p = p->succ;
  }
  return nullptr;
}

void print_all(Link* p)
{
  cout << "{ ";
  while(p) {
    cout << p->value;
    if(p = p-> next()) cout << ", ";  // not comparison, just assignment
  }
  cout << " }";
}

int main()
{
  Link* norse_gods = new Link{"Thor"};
  norse_gods = norse_gods->insert( new Link{"Odin"});
  norse_gods = norse_gods->insert( new Link{"Zeus"});
  norse_gods = norse_gods->insert( new Link{"Freia"});

  Link* greek_gods = new Link("Hera");
  greek_gods = greek_gods->insert( new Link{"Athena"});
  greek_gods = greek_gods->insert( new Link{"Mars"});
  greek_gods = greek_gods->insert( new Link{"Poseidon"});

  Link* p = greek_gods->find( "Mars");
  if (p) p->value = "Ares";

  p = norse_gods->find( "Zeus");
  if (p) {
    if (p == norse_gods) norse_gods = p->next();
    p->erase();
    greek_gods = greek_gods->insert( p);
  }

  print_all(norse_gods);
  cout << '\n';

  print_all(greek_gods);
  cout << '\n';
}
