#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    int A[1000];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int j = 0; j < n; j++)
    {
        sum += A[j];
    }

    cout << sum;
}
