#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,a[3];
    cin>>s;
    int i,j=0;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='.'||s[i]=='e')
            j++;
        else
            a[j]+=s[i];
    }
    cout<<a[0];
    int b;
    stringstream(a[2]) >> b;
    for(i=0; i<b; i++)
    {
        if(i>=a[1].length())
            cout<<0;
        else
            cout<<a[1][i];
    }
    j=b-1;
    for(i=b; i<a[1].length(); i++)
    {
        if(a[1][i]!='0')
            j=i;
    }
    if(j!=b-1)
        cout<<".";
    for(i=b; i<=j; i++)
        cout<<a[1][i];
    return 0;
}
