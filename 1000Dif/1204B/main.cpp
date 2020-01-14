#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll unsigned long long

int main()
{
    int n,l,r;

    cin>>n>>l>>r;
    ll min,max;
    min=pow(2,l)-1 +n-l;
    max=pow(2,r)-1 + (n-r)*pow(2,r-1);
    cout<<min<<" "<<max<<"\n";
}
