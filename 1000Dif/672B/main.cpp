#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    string s;
    cin>>n>>s;
    if(n>26)
    {
        cout<<-1;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                sum++;
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}
