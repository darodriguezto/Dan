#include<iostream>
#include<cmath>

int main(void){
  const int M=2;
  const int N=4;
  double A[M][N] ={{0.0}};
  double At[N][M]={{0.0}};
  std::cout<<"matriz A: "<<"\n";
    for(int ii=0;ii<M;++ii){
      for(int jj=0;jj<N;++jj){
	A[ii][jj]=ii*N+jj;
	std::cout<< A[ii][jj]<<"  ";
      }
      std::cout<<"\n";
    }
    std::cout<<"matriz transpuesta: "<<"\n";
    for(int ii=0;ii<M;++ii){
      for(int jj=0;jj<N;++jj){
	At[jj][ii]=A[ii][jj];
      }
    }
    for(int ii=0;ii<N;++ii){
      for (int jj=0;jj<M;++jj){
	std::cout<< At[ii][jj]<<" ";
      }
      std::cout<<"\n";
    }
  return 0;
}
