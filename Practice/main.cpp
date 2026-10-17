#include <iostream>
#include <string>
#include <vector>


int main () {


  std::vector<float> sAges = {21, 23, 21, 22, 24, 20, 24, 26, 25};
  float total = 0;

  for (int i = 0; i < sAges.size(); i++) {
    total += sAges[i];
  }
 
  float mean = total / sAges.size();
  float mid = (sAges.size() / 2);
  float median = sAges[mid];

  std::sort(sAges.begin(), sAges.end());


  std::cout << "This is average: " << total << " and this is mean: " << mean << " and median is: " << median << std::endl;




  return 0;
}