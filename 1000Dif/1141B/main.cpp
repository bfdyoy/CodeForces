#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,z=0,x=0;
    cin>>a;
    int s[a];
    for(int i=0; i<a; i++)
    {
        cin>>s[i];

    }
    for(int i=0; i<a*2; i++)
    {
        if(s[i%a]==1)
        {
            x++;
            z=max(z,x);
        }
        else
        {
            x=0;
        }
    }
    cout<<z;

}
