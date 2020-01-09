#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[1000011];

int main()
{
    int t;
    string s;
    cin>>t;
    cin>>s;
    int r = 0,u=0;

    int ans =0 ;

    for(int i=0; i<t; i++)
    {
        if(s[i] == 'R')
        {
            r++;
        }
        else
        {
            u++;
        }
        if(r==u)
        {
            if(s[i] == s[i+1])
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
