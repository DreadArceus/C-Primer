#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item v;
  if(std::cin >> v)
  {
    Sales_item x;
    while(std::cin >> x)
    {
      if(v.isbn() == x.isbn())
      {
        v += x;
      }
      else
      {
        std::cout << v << std::endl;
        v = x;
      }
    }
    std::cout << v << std::endl;
  }
  else
  {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  return 0;
}
