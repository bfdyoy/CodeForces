#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,cont=0;
    cin>>n>>m;
    char a[20][20];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            if(a[i][j]=='W')
                if(a[i+1][j]=='P'||a[i-1][j]=='P'||a[i][j+1]=='P'||a[i][j-1]=='P')
                    cont++;
        }
    cout<<cont;
    return 0;
}
