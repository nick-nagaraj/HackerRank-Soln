#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, element;
  cin >> n;
  vector<int> sight;
  vector<int> type;
  int max;

  for (int i = 0; i < 5; i++)
  {
    type.push_back(0);
  }

  for (int i = 0; i < n; i++)
  {
    cin >> element;
    sight.push_back(element);
  }

  for (int i = 0; i < sight.size(); i++)
  {
    if (sight[i] == 1)
    {
      type[0]++;
    }
    else if (sight[i] == 2)
    {
      type[1]++;
    }
    else if (sight[i] == 3)
    {
      type[2]++;
    }
    else if (sight[i] == 4)
    {
      type[3]++;
    }
    else
    {
      type[4]++;
    }
  }


  max = *max_element(type.begin(), type.end());

  for (int i = 0; i < type.size(); i++)
  {
    if (max == type[i])
    {
      cout << i + 1;
      break;
    }
  }



}
