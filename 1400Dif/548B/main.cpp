#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int l[505], a[505][505], c;

int main()
{
    int n,m,q,x,y;
    scanf("%d%d%d",&n,&m,&q);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            scanf("%d",&a[i][j]);
    for(int i=1; i<=n; i++)
    {
        c = 0;
        for(int j=1; j<=m; j++)
        {
            if(a[i][j]==0)
                c = 0;
            else
                c++, l[i] = max(l[i],c);
        }
    }
    while(q--)
    {
        scanf("%d%d",&x,&y);
        a[x][y] = 1 - a[x][y];
        l[x] = c = 0;
        for(int j=1; j<=m; j++)
        {
            if(a[x][j]==0)
                c = 0;
            else
                c++, l[x] = max(l[x],c);
        }
        c = 0;
        for(int i=1; i<=n; i++)
            c = max(l[i],c);
        printf("%d\n",c);
    }
    return 0;
}
