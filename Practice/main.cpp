#include <iostream>
#include <cmath>
#include <vector>


int main () {
  int x[] = {0, 1, 2, 3, 4, 5, 6,};
  double P_coeff[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0};
  int n = 7;
  double total_k = 0.0;

  for (int i = 0; i < n; i++) {
    total_k += P_coeff[i];
  }
  double k = 1.0 / total_k;

  double ans_part1 = 0.0, ans_part2 = 0.0;
  for (int i = 0; i < n; i++) {
    if(x[i] >= 4) {
      ans_part1 = P_coeff[i] * k;
    }
    else if (x[i] > 2 && x[i] <= 5) {
      ans_part2 = P_coeff[i] / k;
    }
  }

  std::cout << "The value of K: " << k << std::endl;
  std::cout << "First Filter P(X >= 4): " << ans_part1 << std::endl;
  std::cout << "Second Filter P(2 < X <= 5):  " << ans_part2 << std::endl;

  return 0;
}