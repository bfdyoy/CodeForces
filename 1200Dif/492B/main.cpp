#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long int ll;
#define vll vector<ll>

#define MAX 100005

int main()
{
    ll n, l;
    cin >> n >> l;
    vector<ld> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ld d = max(a[0], l-a[n-1]);
    for(int i = 0; i<n-1; i++)
    {
        d = max(d, (a[i+1]-a[i])/2);
    }
    cout << setprecision(10) << d << endl;
    return 0;
}
