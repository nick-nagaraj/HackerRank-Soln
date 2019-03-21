#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int t, n, k, element, pos = 0;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    cin >> n >> k;
    pos = 0;

    for (int j = 0; j < n; j++)
    {
      cin >> element;
      if (element <= 0)
      {
        pos++;
      }
    }

    if (pos >= k)
    {
      cout << "NO\n";
    }

    else
    {
      cout << "YES\n";
    }

}


}
