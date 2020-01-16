#include <iostream>


#include <bits/stdc++.h>
using namespace std;

const int maxn=1e5+5;
int n,A[maxn];

int main()
{
    cin>>n;
    for(int i=1,x; i<=n; ++i)
        cin>>x,A[x]++;
    for(int i=1e5; i>=1; --i)
        if(A[i]&&A[i]%2)
        {
            cout<<"Conan";
            return 0;
        }
    cout<<"Agasa";
    return 0;
}
