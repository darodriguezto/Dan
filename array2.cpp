#include<iostream>
#include<cmath>
#include<array>

int main(void){
  const int N=10;
  std::array<int,N> data;
  double suma=0;
  double prom=0;
  for (int ii=0;ii<data.size();++ii){
    data[ii]=ii+1;
    std::cout<<data[ii]<<std::endl;
    suma+=data[ii];
  }
  prom= suma/data.size();
  std::cout<<"La promedio estas: "<< prom <<std::endl;
  return 0;
}
