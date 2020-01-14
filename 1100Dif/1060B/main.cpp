#include<iostream>
using namespace std;
int main()
{
    long long n, b, w=0, a=9, p=1;
    cin>>n;
    if(n<10)
    {
        cout<<n;
    }
    else
    {

        while(a<n/10)
        {
            p=p*10;
            a=a+9*p;
        }
        b=n-a;
        while(a>0)
        {
            w=w+a%10;
            a=a/10;
        }
        while(b>0)
        {
            w=w+b%10;
            b=b/10;
        }
        cout<<w;
    }
}
