#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int n,k,a,b;
long long ans=0;
int main()
{
    cin>>n>>k>>a>>b;
    while(n>1)
    {
        ans+=(long long)n%k*a;
        n-=n%k;
        if((long long)b<((long long)n-n/k)*a)
            n/=k,ans+=b;
        else
            break;
    }
    ans+=((long long)n-1)*a;
    cout<<ans<<endl;
    return 0;
}//???????
