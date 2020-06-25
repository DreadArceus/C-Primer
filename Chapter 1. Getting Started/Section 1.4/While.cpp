#include <iostream>
int main()
{
  int i = 1, sum = 0;
  //executes until i > 10
  while(i <= 10)
  {
    sum += i; //sum = sum + i
    ++i;      //i = i + 1
  }
  std::cout << "Sum of 1 to 10 (inclusive) is " << sum << std::endl;
  return 0;
}
