#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
  int n, A[100000], ans = 0;
  int *max;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  max = max_element(A + 0, A + n);

  for (int i = 0; i < n; i++)
  {
    if (A[i] == *max)
    {
      ans++;
    }
  }

  cout << ans;
}
