#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
char s[maxn];
int u, d, r, l;
int big, small;
int main (void)
{
    scanf ("%s", s);
    int len = strlen (s);
    if (len % 2 == 1)
        printf ("-1\n");
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'U')
                u++;
            if (s[i] == 'D')
                d++;
            if (s[i] == 'R')
                r++;
            if (s[i] == 'L')
                l++;
        }
        big = max (u, d) + max (r, l);
        small = min (u, d) + min (r, l);
        printf ("%d\n", (big - small)/2);
    }
    return 0;
}
