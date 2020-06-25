#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item v, x;
  std::cin >> v;
  while(std::cin >> x)
  {
    v += x;
  }
  std::cout << v << std::endl;
  return 0;
}
