#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int n,m,k,l,i,j,a,b,c,d[105],g[105],res;

int main()
{

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>d[i];
    }

    sort(d,d+n);
    cin>>m;

    for(i=0; i<m; i++)
    {
        cin>>g[i];
    }

    sort(g,g+m);
    i=0;
    j=0;
    while(i<n && j<m)
    {
        if(abs(d[i]-g[j])<=1)
        {
            i++;
            j++;
            res++;
        }
        else if(d[i]>g[j])
            j++;
        else
            i++;
    }

    cout<<res;

}
