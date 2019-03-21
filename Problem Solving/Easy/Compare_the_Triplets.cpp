#include <iostream>
using namespace std;

int main()
{
    int A[3], B[3], alice = 0, bob = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (A[i] > B[i])
        {
            alice++;
            continue;
        }

        else if (A[i] == B[i])
        {
            continue;
        }

        else
        {
            bob++;
            continue;
        }


    }

    cout << alice << " " << bob;

}
