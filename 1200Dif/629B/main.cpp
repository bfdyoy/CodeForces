#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int m[367], f[367];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char c;
        int a, b;
        cin >> c >> a >> b;
        if(c == 'M')
            for(int j = a; j <= b; j++)
                m[j]++;
        else
            for(int j = a; j <= b; j++)
                f[j]++;
    }
    int w = 0;
    for(int i = 1; i <= 366; i++)
        w = max(w, min(m[i], f[i]));
    cout << w*2;
}
