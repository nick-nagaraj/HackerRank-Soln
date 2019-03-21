#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0, A[10];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    cout << sum;

}
