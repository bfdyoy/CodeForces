#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll n,k;
    cin>>n>>k;
    if (k==0 || n==0)
    {
        cout<<0<<" "<<0;
        return 0;
    }
    if (k<n)
        cout<<1;
    else
        cout<<0;
    cout<<" ";
    if (k*2>n-k)
        cout<<n-k;
    else
        cout<<k*2;
    return 0;
}
