#include <iostream>
#include <ctime>

using namespace std;

int main() {
  int a = 10000000;
  int c;

  // Benchmark the right shift operation.
  clock_t start = clock();
  c = a >> 1;
  clock_t end = clock();
  double rightShiftTime = (end - start) / (double)CLOCKS_PER_SEC;

  // Benchmark the division operation.
  start = clock();
  c = a / 2;
  end = clock();
  double divisionTime = (end - start) / (double)CLOCKS_PER_SEC;

  // Print the results.
  cout << "Right shift time: " << rightShiftTime << " seconds" << endl;
  cout << "Division time: " << divisionTime << " seconds" << endl;

  return 0;
}
