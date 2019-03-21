#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int n;
  int grades[60];

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> grades[i];
  }

  for (int j = 0; j < n; j++)
  {
    if (grades[j] < 38 || grades[j] % 5 == 0)
    {
      cout << grades[j] << "\n";
      continue;
    }

    else if (grades[j] % 10 - 5 < 0 && grades[j] % 10 > 2)
    {
      cout << grades[j] + (5 - grades[j] % 5) << "\n";
      continue;
    }

    else if (grades[j] % 10 - 5 > 0 && grades[j] % 10 > 7)
    {
      cout << grades[j] + (5 - grades[j] % 5) << "\n";
      continue;
    }

    else
    {
      cout << grades[j] << "\n";
    }
  }
}
