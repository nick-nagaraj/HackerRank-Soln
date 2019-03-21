#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int k = 0; k < n; k++)
  {

  for (int i = 0; i < n - k - 1; i++)
  {
    cout << " ";
  }

  for (int i = 0; i < k + 1; i++)
  {
    cout << '#';
  }

  cout << endl;
  }

}
