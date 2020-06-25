//simply invert the initial value and loop condition
#include <iostream>
int main()
{
  int i = 10, sum = 0;
  while(i > 0)
  {
    sum += i;
    --i;
  }
  std::cout << "The sum of 1 to 10 (inclusive) is " << sum << std::endl;
  return 0;
}
