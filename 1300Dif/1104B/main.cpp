#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string s;
    cin>>s;
    a=0;
    b=1;
    while(b<s.length())
    {
        if(s[b]==s[b-1])
        {
            a++;
            s.erase(b-1,2);
            b-=2;
        }
        b++;
    }
    if(a%2==0)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}
