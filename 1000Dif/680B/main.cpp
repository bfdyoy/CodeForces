#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    int a[n];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cnt+=a[i];
    }

    for(int i=1; i<m&&i<=n-m; i++)
    {
        if(a[m+i]+a[m-i]==1)
        {
            cnt--;
        }
    }

    cout<<cnt;
    return 0;
}
