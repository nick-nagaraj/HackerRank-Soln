#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int ar[100], i;
    for(i=0;i<4;i++) {
        cin>>ar[i];
    }
    int temp = 0;

 for(int i=1;i<4;++i)
    {
        for(int j=0;j<(4-i);++j)
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
    }
    return ar[3];

}

int main() {
    int a, b, c, d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
