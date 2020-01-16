#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int n,m,k,l,i,a1,a2,b1,b2,res;
string s;
int main()
{

    cin>>n>>s;

    for(i=0; i<n; i++)
    {
        if(s[i]=='b')
            if(i%2==0)
                a1++;
            else
                a2++;
        else if(i%2==0)
            b1++;
        else
            b2++;
    }
    res=min(max(a2,b1),max(a1,b2));
    cout<<res;
}
