#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,c=1;
    cin>>n;
    long long nn=19;
    while(true)
    {
        if(c==n)
        {
            cout<<nn;
            return 0;
        }
        nn+=9;
        long long a=nn;
        int t=0;
        while(a!=0)
        {
            t+=a%10;
            a=a/10;
        }
        if(t==10)
            c++;
    }
}
