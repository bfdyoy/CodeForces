#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    for(int z=0; z<2; z++)
    {
        for(int I=0; I<2; I++)
        {
            for(int j=0; j<2; j++)
            {
                if (max(c,f)<=a&&d+e<=b)
                {
                    cout<<"YES";
                    return 0;
                }
                swap(c,d);
            }
            swap(e,f);
        }
        swap(a,b);
    }

    cout <<"NO";
}
