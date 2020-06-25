#include <iostream>
int main()
{
  int cVal = 0, val = 0;
  if(std::cin >> cVal)
  {
    int cnt = 1;
    while(std::cin >> val)
    {
      if(val == cVal)
      {
        ++cnt;
      }
      else
      {
        std::cout << cVal << " occurs " << cnt << " times" << std::endl;
        cVal = val;
        cnt = 1;
      }
    }
    std::cout << cVal << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
