#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, dx, dy;
string s;

int main()
{
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'U')
            dy++;
        if (s[i] == 'D')
            dy--;
        if (s[i] == 'L')
            dx--;
        if (s[i] == 'R')
            dx++;
    }
    dx = abs(dx);
    dy = abs(dy);
    cout << n - dx - dy;
    return 0;
}
