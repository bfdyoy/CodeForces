#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    long long x,y;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        scanf("%I64d",&x);
        y=sqrtl(x);
        for(j=2; j*j<y; j++)
            if(x%j==0)
                break;
        if(j*j>y && y*y==x && x>1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
