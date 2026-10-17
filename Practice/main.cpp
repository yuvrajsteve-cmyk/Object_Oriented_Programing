#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>

int main () {
  std::random_device rd;
  std::mt19937 gen(rd());

  std::normal_distribution<double> d(0.0, 1.0);

  std::map<int, int> histogram;
  const int total_samples = 10000;

  for (int n = 0; n < total_samples; ++n) {
    int bin = std::round(d(gen));
    histogram[bin]++;
  }

  std::cout << "Normal Distribution Histogram (" << total_samples << " samples): \n\n";
  for (auto p : histogram) {
    std::cout << std::setw(2) << p.first << " : "
          << std::string(p.second / 100, '*') << "\n";
  }

  return 0;
}