#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
    int n;
    cin>>n;
    char c;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=7; j++)
        {
            cin>>c;
            if(c=='1')
                a[j]++;
        }
    }
    int ans=0;
    for(int i=1; i<=7; i++)
        ans=max(ans,a[i]);
    cout<<ans<<endl;
    return 0;
}
