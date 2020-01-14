
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,l;
    cin >> h >> l;
    double ans=(l*l-h*h)/(2*h);
    cout << fixed << setprecision(13) <<ans;
    return 0;
}
