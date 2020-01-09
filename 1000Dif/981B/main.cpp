#include <iostream>

#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define x first
#define y second
#define PB push_back
#define ALL(a) a.begin(), a.end()
#define lowbit(k) (k & -k)
#define bcnt(x) __builtin_popcount(x)
#define CLR(a, x) memset(a, x, sizeof(a))
#define Vis(u) vis[u.x][u.y][u.z]
#define Pre(u) p[u.x][u.y][u.z]

typedef long long LL;
typedef unsigned long long ULL;

const int N = 3e4 + 10;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
const double eps = 1e-10;
const int M = 1e4 + 3;
const int maxn = 1e3 + 10;

typedef pair<int, int> PII;

map<int, int> xp;

void read()
{
    int n, x, y;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &x, &y);
        xp[x] = max(xp[x], y);
    }
}

int main ()
{
    read();
    read();
    LL ans = 0;
    for(auto k : xp)
        ans += k.y;
    printf("%lld\n", ans);

    return 0;
}
