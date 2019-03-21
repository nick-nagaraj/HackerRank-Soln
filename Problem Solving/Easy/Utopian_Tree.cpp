#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n, t, sum = 1;
  vector <int> height;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    sum = 1;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
      height.push_back(sum);
      if (j % 2 == 0)
      {
        sum *= 2;
      }
      else
      {
        sum++;
      }
    }
    cout << sum << "\n";
  }
}
