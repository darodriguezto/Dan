#include<iostream>
#include<array>
#include<algorithm>
//DECLARACIÓN ARREGLO SENCILLO E IMPRIME EL MISMO ARREGLO
int main(void)
{
  const int N=500;
  std::array<double, N> data1 = {0.0};
  for(int ii=0; ii<data1.size();++ii)
    {
      data1[ii]=ii;//Asignación valores de arreglo
      std::cout<<data1[ii] <<"\n";//imorime el arreglo 
    }
  
  return 0;
}
