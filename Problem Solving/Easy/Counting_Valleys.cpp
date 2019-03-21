#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int n;
  string elev;
  vector <int> count;
  int flag = 0;
  int ans = 0;

  cin >> n;
  cin >> elev;

  for (int i = 0; i < n; i++)
  {
    if (elev[i] == 'U')
    {
      flag++;
      count.push_back(flag);
    }

    else
    {
      flag--;
      count.push_back(flag);
    }
  }

  for (int i = 1; i < count.size(); i++)
  {
    if (count[i - 1] == -1 && count[i] == 0)
    {
      ans++;
    }
  }

  cout << ans;
}
