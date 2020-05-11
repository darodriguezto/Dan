#include<iostream>
#include<cmath>
int main(void){
  double M=4.3;
  double E=4.5;
  double P=3.4;
  double L=4.5;
  double D=4.7;
  double suma=4*(L+D)+3*(P+E+M);
  double prom=suma/17;
  std::cout<<"PAPPI: "<< prom <<std::endl;
  double suma0=4*(4.0+2+2.8+3.0+3.2+3.3)+3*(4.3+4.6+4.8+3.7);
  double PAPA= (suma0+suma)/53;
  std::cout<<"PAPA viejo: "<< suma0/36<<std::endl;
  std::cout<<"PAPA: "<< PAPA<<std::endl;
  return 0;
}
