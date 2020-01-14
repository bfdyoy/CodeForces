#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=97;
    if(s[0]!='a')
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]==char(cnt))
            cnt++;
        else if(s[i]>char(cnt))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
