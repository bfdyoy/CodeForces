#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4')
            a++;
        else if(s[i]=='7')
            b++;
    }
    if(!a&&!b)
        return cout<<-1,0;
    if(a>=b)
        cout<<4;
    else
        cout<<7;
    return 0;
}
