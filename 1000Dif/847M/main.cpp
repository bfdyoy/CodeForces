#include <iostream>

#include<bits/stdc++.h>
#include<string>
using namespace std;
int n, x,y, dif;
bool ciag = true;

int main()
{
    cin>>n;
    cin>>x>>y;
    dif = y-x;
    n-=2;
    int tmp = y;
    while(n--)
    {
        cin>>x;
        if(x-y != dif)
            ciag = false;
        tmp = x;
        x = y;
        y = tmp;
    }
    if(ciag)
        cout<<y+dif;
    else
        cout<<y;
}
