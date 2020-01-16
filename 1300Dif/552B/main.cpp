#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main()
{
    cin>>a;
    b=9;
    while(a>0)
    {
        c+=a;
        a-=b;
        b=b*10;
    }
    cout<<c;
}
