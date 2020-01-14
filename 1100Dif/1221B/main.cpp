#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int j,cnt=0;

    for(int i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            if(cnt%2==0)
            {
                cout<<"W";
            }
            else
            {
                cout<<"B";
            }
            cnt++;

        }
        cout<<endl;
        if(r%2==0)
            cnt++;
    }
    return 0;
}
