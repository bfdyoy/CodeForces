#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int b[100];
int main()
{
    int n,s=0,i;
    cin>>n;
    for(i=1; i<=n; ++i)
        cin>>b[i];
    for(i=0; i<n; ++i)
        if(b[i] && !b[i-1] && b[i-2])
            ++s, b[i]=0;
    cout<<s;
    return 0;
}
