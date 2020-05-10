#include<iostream>
#include<cstdlib>
#include<vector>
#include<random>
#include<algorithm>

double pnorm(const std::vector<double> &data, int P);

int main(int argc, char *argv[])
{
  const int N=std::atoi(argv[1]);
  const int P=std::atoi(argv[2]);

  std::mt19937 gen(0);
  std::uniform_real_distribution<double> dis(1.0,2.0);

  std::vector<double> arr(N);
  for (auto & x: arr){
    x=dis(gen);
  }
  std::cout <<pnorm(arr, P) <<std::endl;
  return 0;
}
double pnorm(const std::vector<double> &data, int P){
  double suma=0.0;
  for (auto x:data) {
    suma += std::pow(std::fabs(x), P);
  }
  return std::pow(suma, 1.0/P);
}
