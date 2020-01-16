#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k=1<<30;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>x;
            k=min(k,x/max(i,n-1-i));
        }
        cout<<k<<endl;
    }
}
