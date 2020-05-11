#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib>

double trace(const std::vector<double> & data);
double multiplicación(const std::vector<double> &data, const std::vector<double> &data);
int main(int argc, char*argv[]){
  const int M=std::atoi(argv[1]);
  std::vector<double> A(M*M);
  for (auto & x:A){
    x=8;
  }
  for (int ii=0;ii<M; ++ii){
    for(int jj=0;jj<M;++jj){
      A[ii*M+jj]=8;
      std::cout<< A[ii*M+jj]<<"  ";}
    std::cout<<"\n";
  }
  std::cout<< "La traza es: "<<trace(A)<<std::endl;
  return 0;
}
      
double trace(const std::vector<double> & data)
{
  double suma = 0.0;
  int N = std::sqrt(data.size());
  for (int ii = 0; ii < N; ++ii) {
    int jj = ii;
    suma += data[ii*N + jj];
  }
  return suma;
}
			
