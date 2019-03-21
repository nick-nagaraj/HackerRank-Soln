#include <iostream>
#include <algorithm>
#include <cstdint>
#include <array>

using namespace std;

int main()
{
  int A[5];
  int* min, *max;
  uint64_t Sum = 0;

  for (int i = 0; i < 5; i++)
  {
    cin >> A[i];
  }

  min = min_element(A + 0, A + 5);
  max = max_element(A + 0, A + 5);

  for (int i = 0; i < 5; i++)
  {
    Sum += A[i];
  }

  cout << Sum - *max << " ";
  cout << Sum - *min;

}
