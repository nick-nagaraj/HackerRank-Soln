#include <iostream>
#include <stdio.h>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
        cout<<*a+*b<<endl;
        if ((*a-*b)<0)
        {cout<<*b-*a;}
        else
        {cout<<*a-*b;}


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}
