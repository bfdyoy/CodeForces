#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[100010],b[100010],d[1000010];
int main()
{
    int n,i,s=0,now=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for(i=1; i<=n; i++)
        scanf("%d",&b[i]),d[b[i]]=i;
    for(i=1; i<=n; i++)
    {
        if(d[a[i]]<now)
            s++;
        now=max(now,d[a[i]]);
    }
    cout<<s;
    return 0;
}
