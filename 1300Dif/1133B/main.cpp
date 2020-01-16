#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int n,k,ans;
int s[110];

int main()
{
    int a;
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        s[a%k]++;
    }
    ans=s[0]/2;
    for(int i=1; i<=k/2; i++)
        ans+=min(s[i],s[k-i]);
    if(k%2==0)
    {
        ans-=s[k/2];
        ans+=s[k/2]/2;
    }
    cout<<ans*2<<endl;
    return 0;
}
