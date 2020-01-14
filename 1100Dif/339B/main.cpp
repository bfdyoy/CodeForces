#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, x, pos = 1;
    scanf("%d %d", &n, &m);

    long long ans = 0;

    for(int i = 0; i < m; i++)
    {
        scanf(" %d", &x);

        if(x >= pos)
            ans += x - pos;
        else
            ans += n - pos + x;

        pos = x;
    }

    cout << ans << endl;

    return 0;
}
