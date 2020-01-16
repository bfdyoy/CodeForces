#include<iostream>
using namespace std;
long long n,i,a,b,k,l,x,s;
int main()
{
    cin>>n>>a;
    b=1;
    for(i=0; i<=n; i++)
    {
        k=i;
        b=i;
        while(b>0)
        {
            k=k*10+b%10;
            b=b/10;
        }
        s=s+(k%a);
    }
    cout<<s%a;
}
