#include <iostream>
#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    LL a,b,c,d,e,f,x,y,z;
    cin>>x>>a>>b>>c>>y>>d>>e>>f>>z;
    z=(c+d+a+b-e-f)/2;
    y=(a+b+e+f-c-d)/2;
    x=(c+d+e+f-a-b)/2;
    cout<<x<<" "<<a<<" "<<b<<"\n"<<c<<" "<<y<<" "<<d<<"\n"<<e<<" "<<f<<" "<<z;

    return 0;
}
