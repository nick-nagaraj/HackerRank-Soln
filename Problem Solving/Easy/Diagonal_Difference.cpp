#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, A[100][100];
    int sumL = 0, sumR = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }

    }

    for (int i = 0; i < n; i++)
    {
        sumL += A[i][i];
    }

    for (int i = 0; i < n; i++)
    {
        sumR += A[n - i - 1][i];
    }

    cout << abs(sumR - sumL);

}
