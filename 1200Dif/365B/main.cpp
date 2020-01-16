#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,ans,k;
    int a[100000];
    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    ans=min(2,n);
    k=2;
    for( i=2; i<n; i++)
    {
        if(a[i]==a[i-1]+a[i-2])
        {
            k++;
        }
        else
        {
            k=2;
        }
        ans=max(ans,k);
    }
    printf("%d\n",ans);
    return 0;
}
