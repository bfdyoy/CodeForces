#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n, b;

int main()
{
    int sum = 0, minim = 100000005;
    cin >> n;
    for( int i = 0; i < n; ++i )
    {
        cin >> b;
        if( b > 0 )
            sum += b;
        if( abs(b) < minim && abs(b)%2 == 1 )
            minim = abs(b);
    }

    if( sum%2 == 0 )
        cout << sum - minim << endl;
    else
        cout << sum << endl;
    return 0;
}
