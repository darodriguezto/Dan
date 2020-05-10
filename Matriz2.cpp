#include<iostream>
#include<cmath>

int main(void){
  const int M=3;
  const int N=5;
  double A[M*N]={0.0};
  double At[N*M]={0.0};
  for (int ii=0;ii<M;++ii){
    for(int jj=0;jj<N;++jj){
      A[ii*N+jj]=ii*N+jj;
      std::cout<< A[ii*N+jj]<<"  ";
    }
    std::cout<<"\n";
  }
  for (int ii=0;ii<M;++ii){
    for (int jj=0;jj<N;++jj){
      At[jj*N+ii]=A[ii*N+jj];
    }
  }
  for (int ii=0;ii<N;++ii){
    for (int jj=0;jj<M;++jj){
      std::cout <<At[ii*N+jj]<< "  ";
    }std::cout<<"\n";}
  return 0;
}
