#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int c[3] = {0};

    for(int i = 0; i < 3; i++)
    {
        cin>>a;
        if(a[1]=='<')
            c[a[2]-'A']++;
        else
            c[a[0]-'A']++;
    }
    if(c[0]==1 && c[1]==1 && c[2]==1)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    for(int i = 0; i < 3; i++)
    {
        a[c[i]] = 'A' + i;
    }
    cout<<a<<endl;

    return 0;

}
