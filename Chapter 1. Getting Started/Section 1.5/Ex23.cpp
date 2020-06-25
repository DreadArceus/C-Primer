#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item v, a;
  int cnt = 1;
  std::cin >> v;
  while(std::cin >> a)
  {
    while(a.isbn() == v.isbn())
    {
      ++cnt;
      if(!(std::cin >> a))
      {
        std::cout << v.isbn() << " " << cnt << std::endl;
        return 0;
      }
    }
    std::cout << v.isbn() << " " << cnt << std::endl;
    v = a;
    cnt = 1;
  }
  if(cnt == 1)
  {
    std::cout << v.isbn() << " " << cnt << std::endl;
  }
  return 0;
}
