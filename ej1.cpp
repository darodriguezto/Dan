#include <iostream>
int main (void)
{
  double miles=1, km=1.609;
  std::cout <<"Miles: ";
  std::cin >>miles;
  km=miles*km;
  std::cout <<"Kilometers: "<< km<<std::endl;
  return 0;
}
