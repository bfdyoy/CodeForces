#include <iostream>
#include <bits/stdc++.h>
int n;
int a[26];
using namespace std;

int main(void)
{

    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);

    long long sum=a[n-1];

    for (int i=n-2; i>=0; i--)
    {
        a[i]=max(0, min(a[i+1]-1, a[i]));
        sum+=a[i];
    }

    cout<<sum<<endl;
    return 0;
}
