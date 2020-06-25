//Just gotta replace the starting value of i with 50
// and the loop's ending value of 10 with 100.
#include <iostream>
int main()
{
  int i = 50, sum = 0;
  while(i <= 100)
  {
    sum += i;
    ++i;
  }
  std::cout << "The sum of 50 to 100 (inclusive) is " << sum << std::endl;
  return 0;
}
