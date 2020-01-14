#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll a,b,x=1;
    cin>>a>>b;


    for(ll i=a+1; i<=b; i++)
    {
        if(x==0)
            break;
        x*=i%10;
        x%=10;
    }
    cout<<x;
    return 0;

}
