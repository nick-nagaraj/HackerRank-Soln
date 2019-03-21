#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, t, d = 0, x;
  vector <int> digit;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    cin >> n;
    x = n;
    digit.clear();
    d = 0;

    if (x <= 10)
    {
      cout << "1" << "\n";
      continue;
    }

    while (x > 0)
    {
      digit.push_back(x % 10);
      x = x / 10;
    }

    for (int j = 0; j < digit.size(); j++)
    {
      if (digit[j] == 0)
      {
        continue;
      }

      else if (n % digit[j] == 0)
      {
        d++;
      }
    }
    cout << d << "\n";
  }

}
