#include<iostream>
using namespace std;
int main()
{
    long long n,m,l=1,i,k=-1,x;
    cin>>n;
    m=n;
    while(m>0)
    {
        x=1;
        while(n>0)
        {
            x*=n%10;
            n/=10;
        }
        k=max(k,x);
        m/=10;
        l*=10;
        n=m*l-1;
    }
    cout<<k;
    return 0;
}
