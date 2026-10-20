#include <iostream>
#include <cmath>


int main () {
  int x[] = {0, 1, 2, 3, 4, 5, 6, 7, 8,};
  int f[] = {1, 8, 28, 56, 70, 56, 28, 8, 1};
  int n = 9;
  double N = 0;
  double sum_fx = 0;

  for (int i = 0; i < n; i++)  {
    N = N + f[i];
    sum_fx = sum_fx + (f[i] * x[i]);
  }

  double mean = sum_fx / N;

  double sum_fd1 = 0, sum_fd2 = 0, sum_fd3 = 0, sum_fd4 = 0;

  for (int i = 0; i < n; i++) {
    double d = x[i] - mean;

    sum_fd1 = sum_fd1 + (f[i] * pow(d, 1));
    sum_fd2 = sum_fd2 + (f[i] * pow(d, 2));
    sum_fd3 = sum_fd3 + (f[i] * pow(d, 3));
    sum_fd4 = sum_fd4 + (f[i] * pow(d, 4));
  }

  std::cout << "1st Moment = " << (sum_fd1 / N) << std::endl;
  std::cout << "2nd Moment = " << (sum_fd2 / N) << std::endl;
  std::cout << "3rd Moment = " << (sum_fd3 / N) << std::endl;
  std::cout << "4th Moment = " << (sum_fd4 / N) << std::endl;

  return 0;
}