#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
  int n, k, element, max;
  vector<int> height;

  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    cin >> element;
    height.push_back(element);
  }

  max = *max_element(height.begin(), height.end());

  if (max > k)
  {
    cout << abs(max - k);
  }

  else
  {
    cout << "0";
  }

}
