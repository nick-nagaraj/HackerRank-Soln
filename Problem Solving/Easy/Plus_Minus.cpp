#include <iostream>
using namespace std;

int main()
{
    float n, A[100], psum = 0, nsum = 0, zsum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            psum++;
        }

        else if (A[i] < 0)
        {
            nsum++;
        }

        else
        {
            zsum++;
        }

    }

    cout << psum/n << "\n";
    cout << nsum/n << "\n";
    cout << zsum/n << "\n";
}
