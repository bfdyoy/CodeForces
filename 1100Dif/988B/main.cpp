#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int i,n;
string s[105];
int T(string x,string y)
{
    return x.size()<y.size();
}
int main()
{
    for(cin>>n; i<n;)
        cin>>s[i++];
    for(sort(s,s+n,T); --i;)
        if(s[i].find(s[i-1])>=s[i].size())
            return cout<<"NO",0;
    for(cout<<"YES"; i<n;)
        cout<<endl<<s[i++];
}
