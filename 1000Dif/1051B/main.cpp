#include <iostream>

#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for(ll i = l; i <= r ; i +=2)
    {
        cout << i << " " << i+1 << endl;
    }
    return 0;
}
