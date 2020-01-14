#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s>>t;
        int yes=0;
        for(int i=0; i<s.size(); i++)
            for(int j=0; j<t.size(); j++)
                if(s[i]==t[j])
                    {
                        yes = 1;
                        break;
                    }
        if(yes)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
