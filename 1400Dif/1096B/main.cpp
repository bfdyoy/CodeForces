#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define mod 998244353
int main()
{
    int n;
    string s;
    cin>>n>>s;
    LL l=0,r=n-1;
    LL ans=0;
    for (l=1; l<n && s[l]==s[l-1]; l++);
    for (r=n-2; r>=0 && s[r]==s[r+1]; r--);

    if (s[0]==s[n-1])
        ans=(1+l)*(n-r);
    else
        ans=l+(n-r);

    cout<<ans%mod<<endl;
}
