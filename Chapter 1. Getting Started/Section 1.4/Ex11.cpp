#include <iostream>
int main()
{
  int a = 0, b = 0, sum = 0;
  std::cin >> a >> b;
  std::cout << "List of numbers in between:" << std::endl;
  while(a <= b)
  {
    std::cout << a << std::endl;
    ++a;
  }
  return 0;
}
