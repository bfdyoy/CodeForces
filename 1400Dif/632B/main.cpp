#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int maxn = 500000 + 100;
typedef long long ll;
typedef unsigned long long llu;
int a[maxn];
char s[maxn];
ll suma[maxn];
ll sumb[maxn];
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d",&a[i]);
        }
        scanf("%s",s+1);
        for (int i = 1; i <= n; ++i)
        {
            suma[i]=sumb[i]=0;
            suma[i]+=suma[i-1];
            sumb[i]+=sumb[i-1];
            if (s[i] == 'A')
                suma[i]+=a[i];
            else
                sumb[i]+=a[i];
        }
        int len = n;
        ll sum = -1;
        ll tsum=0;
        for (int i = 1; i <= n; ++i)
        {
            tsum = suma[i] + sumb[len]-sumb[i];
            sum = max(sum,tsum);
        }
        for (int i = len; i > 0; --i)
        {
            tsum = suma[len]-suma[i] + sumb[i];
            sum = max(sum,tsum);
        }
        cout<<sum<<endl;
    }
    return 0;
}
