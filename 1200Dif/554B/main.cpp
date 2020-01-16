#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<string> s;
    string a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        s.push_back(a);
    }
    int max=-1;
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        for(int j=0; j<n; j++)
        {
            if(s[i]==s[j])
                cnt++;
        }
        if(cnt>max)
            max=cnt;
    }
    cout<<max<<endl;
    return 0;
}
