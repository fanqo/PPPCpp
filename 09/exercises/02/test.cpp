#include "Name_pairs.h"

int main()
{
  Name_pairs n;
  n.read_names();
  n.read_ages();
  n.print();
  n.nsort();
  n.print();
}
