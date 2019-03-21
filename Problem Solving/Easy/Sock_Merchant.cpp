#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n, insert, flag, ans = 0;
  vector<int> color;
  vector<int> match;
  vector<int> num;
  vector<int>::iterator ip;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> insert;
    color.push_back(insert);
  }

  match = color;

  sort(match.begin(), match.end());
  ip = unique(match.begin(), match.end());
  match.resize(distance(match.begin(), ip));

  for (int i = 0; i < match.size(); i++)
  {
    flag = 0;
    for (int j = 0; j < color.size(); j++)
    {
      if (match[i] == color[j])
      {
        flag++;
      }
    }
    num.push_back(flag);
  }

  for (int i = 0; i < num.size(); i++)
  {
    ans += num[i]/2;
  }

  cout << ans;

}
