#include <iostream>
#include <stdio.h>
using namespace std;

typedef long long ll;

const int maxn=55;
int a[maxn][maxn];
int ans[maxn];

int main()
{
    int n;
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            int t;
            scanf("%d",&t);
            a[i][t]++;
        }
    }

    for (int i=1; i<=n; i++)
    {
        int m=0;
        for (int j=1; j<=n; j++)
            if (a[i][j]>m)
                m=a[i][j];
        ans[i]=n-m;
    }
    for (int i=1; i<=n; i++)
        if (ans[i]==n-1)
        {
            ans[i]=n;
            break;
        }

    for (int i=1; i<=n; i++)
        printf("%d ",ans[i]);
    printf("\n");

    return 0;
}
