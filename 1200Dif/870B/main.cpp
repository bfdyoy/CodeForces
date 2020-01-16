#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int *a = new int[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int maxi=max(a[0],a[n-1]);
    sort(a,a+n);
    if(k==1)
        cout<<a[0];
    else if(k==2)
        cout<<maxi;
    else
        cout<<a[n-1]<<endl;
    delete[]a;
    return 0;
}
