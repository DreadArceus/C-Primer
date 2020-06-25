//For version of while.cpp
#include <iostream>
int main()
{
  int sum = 0;
  for(int x = 1; x <= 10; ++x)
  {
    sum += x;
  }
  std::cout << "The sum of 1 to 10 is " << sum << std::endl;
  return 0;
}
