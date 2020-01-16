#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x[n],y[n];
    for(int i=0; i<n; ++i)
    {
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    long long mx=x[n-1]-x[0];
    long long my=y[n-1]-y[0];
    cout<<max(my*my,mx*mx);
    return 0;
}
