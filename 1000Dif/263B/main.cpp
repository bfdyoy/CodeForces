#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin >> n >> k;

    long long a[n];
    for(long long i=0; i<n; ++i)
        cin >> a[i];
    sort(a,a+n);

    if(n<k)
        cout << -1 << "\n";
    else
    {
        cout << a[n-k]<< " " <<a[n-k]<< "\n";
    }
    return 0;
}
