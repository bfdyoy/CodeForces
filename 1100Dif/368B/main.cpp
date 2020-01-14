#include <iostream>
#include <set>
#include <cstdio>
#include <stdio.h>

using namespace std;
int a[100001], b[100001];
int i, n, m, j, k;
set<int> s;
int main()
{
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = n; i > 0; i--)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }
    for (i = 0; i<m; i++)
    {
        scanf("%d", &k);
        cout << b[k] << endl;
    }
    return 0;
}
