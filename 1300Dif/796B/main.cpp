#include<iostream>
#include <stdio.h>
using namespace std;
int z[1000009];
int n,m,k;
int main()
{
    cin>>n>>m>>k;
    for (int i=0; i<m; i++)
    {
        int x;
        scanf("%d",&x);
        z[x]=1;
    }
    int C=1;
    for (int i=0; i<k; i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        if(v==C)
            swap(u,v);
        if(z[C]==0 && u==C)
            C=v;
    }
    cout<<C;
}
