#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int n, k, element, sum = 0, charge;
  vector<int> items;

  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    cin >> element;
    items.push_back(element);
    sum += element;
  }

  cin >> charge;

  for (int j = 0; j < n; j++)
  {
    if (j == k)
    {
      sum = sum - items[j];
      break;
    }
  }

  sum = sum / 2;

  if (sum == charge)
  {
    cout << "Bon Appetit";
  }

  else
  {
    cout << abs(sum - charge);
  }
}
