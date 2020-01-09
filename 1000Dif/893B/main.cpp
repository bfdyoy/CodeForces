#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res=1;
    for(int i=1; i<=n; ++i)
        if(n%i==0)
        {
            for(int j=0; j<13; ++j)
            {
                if(i==((1<<j)-1)*(1<<(j-1)))
                    res=i;
            }
        }
    cout << res;
    return 0;
}
