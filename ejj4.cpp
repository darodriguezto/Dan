#include <iostream>
using namespace std;
int main()
{
  int val1,val2;
  double val3;
  std::cout <<"Inserte dos valores:" ;
  std::cin >> val1>> val2 ;
  if (val1<val2){
    std::cout <<val2 <<" Es mayor que: "<<val1<<endl;
  }
  else {
    if (val1-val2==0)
      std::cout <<"Son iguales"<<endl;
    else {
      std::cout <<val1 <<" Es mayor que: "<<val2<<endl;
    }
  }
  std::cout <<"La suma de los números es: "<< val1+val2<<endl;
  std::cout <<"Su diferencia: "<< val1-val2<<endl;
  std::cout <<"Su producto: "<< val1*val2 <<std::endl;
  val3=val1/val2;
  cout <<"Su razón: "<< val3<<endl;
  return 0;
}
