/* 
Datatypes, variables and constants.
*/

#include <iostream>

int main() {
  std::cout << "Size of char: " << sizeof(char) << " byte(s)" << std::endl;
  std::cout << "Size of int: " << sizeof(int) << " byte(s)" << std::endl;
  std::cout << "Size of float: " << sizeof(float) << " byte(s)" << std::endl;
  std::cout << "Size of string: " << sizeof(std::string) << " byte(s)" << std::endl;
  return 0;
}