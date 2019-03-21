#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
  int n, m, b, element;
  vector<int> cost;
  vector<int> keyboard;
  vector<int> drive;


  cin >> b >> n >> m;

  for (int i = 0; i < n; i++)
  {
    cin >> element;
    keyboard.push_back(element);
  }

  for (int j = 0; j < m; j++)
  {
    cin >> element;
    drive.push_back(element);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cost.push_back(keyboard[i] + drive[j]);
    }
  }

  sort(cost.begin(), cost.end(), greater<int>());

  if (b < cost[cost.size() - 1])
  {
    cout << "-1";
  }

    for (int i = 0; i < cost.size(); i++)
    {
      if (cost[i] > b)
      {
        continue;
      }

      else if (cost[i] <= b)
      {
        cout << cost[i];
        break;
      }
    }
}
