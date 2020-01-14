#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,i;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1; i<n-1; i++)
        if(a[i]+a[i-1]>a[i+1])
        {
            cout<<"YES"<<"\n";
            return 0;
        }
    cout<<"NO"<<"\n";
}
