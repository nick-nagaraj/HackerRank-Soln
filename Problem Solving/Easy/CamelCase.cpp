#include <iostream>
#include <vector>
#include <algorithm>
#include <algorithm>

using namespace std;

int main()
{
  string camelCase;
  int count = 1;

  cin >> camelCase;

  for (int i = 0; i < camelCase.size(); i++)
  {
    if ((int)camelCase[i] >= 65 && (int)camelCase[i] <= 90)
    {
      count++;
    }

    else if (camelCase[i] == '\0')
    {
      break;
    }

    else
    {
      continue;
    }
  }

  cout << count;
}
