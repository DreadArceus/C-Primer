//Oh look it's a comment
/*
* Program to output the sum of two user inputted numbers,
* bu the way, multiline comments do not nest.
*/
#include <iostream>
int main()
{
  //ask for two numbers from the user
  std::cout << "Enter two numbers:" << std::endl;
  //Initialize two integers to store the input
  int v1 = 0, v2 = 0;
  //store the input
  std::cin >> v1 >> v2;
  //output
  std::cout << "The sum of " << v1 << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}
