#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k=0;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(int i=1; i<n; ++i)
    {
        cin>>a[i];
        if(a[i]>a[i-1] && k==i-1)
        {
            k++;
        }
        else if(a[i]>a[i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
