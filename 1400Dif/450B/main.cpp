#include<iostream>
using namespace std;
int x,y,n;
long long k=1000000007;
int main()
{
    cin>>x>>y>>n;
    int a[]= {x-y,x,y,y-x,-x,-y};
    cout<<(a[n%6]%k+k)%k;
}
