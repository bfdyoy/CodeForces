#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    cin>>n>>a>>b;
    int c[n],ans=0;
    for ( i=0; i<n; i++)
    {
        cin>>c[i];
        ans+=c[i];
    }
    sort(c+1,c+n);
    i=n-1;
    while (i>0&&b>(1.0*a*c[0])/ans)
        ans-=c[i--];
    cout<<(n-1)-i;
}
