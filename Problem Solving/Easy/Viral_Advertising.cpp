#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
  int n, shared = 5, sum = 0;
  int liked;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    liked = floor(shared / 2);
    sum += liked;
    shared = liked * 3;
  }

  cout << sum;

}
