#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int maxn = 100005;
bool x[maxn], y[maxn];

int main()
{
    int n, k, ans = -1, a;
    scanf ("%d%d", &n, &k);
    while(n--)
    {
        scanf ("%d", &a);
        if (x[a])
            ans = 0;
        if (ans)
            if (x[a&k] || y[a])
                ans = 1;
        if (ans && ans != 1)
            if (y[a&k])
                ans = 2;
        x[a] = true;
        y[a&k] = true;
    }
    printf ("%d\n", ans);
    return 0;
}
