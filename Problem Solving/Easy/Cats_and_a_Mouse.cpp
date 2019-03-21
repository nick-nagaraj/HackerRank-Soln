#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int q;
  int x, y, z;

  cin >> q;

  for (int i = 0; i < q; i++)
  {
    cin >> x >> y >> z;
    if (abs(x - z) == abs(y - z))
    {
      cout << "Mouse C\n";
      continue;
    }

    else if (abs(x - z) > abs(y - z))
    {
      cout << "Cat B\n";
    }

    else
    {
      cout << "Cat A\n";
    }
  }
}
