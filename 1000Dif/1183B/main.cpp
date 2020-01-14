#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k,a[105];
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        if(a[n-1]-a[0]>2*k)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<a[0]+k<<endl;
    }
}
