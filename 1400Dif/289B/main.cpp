#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[1000010],n,m,d,r,h,i;
int main()
{
    cin>>n>>m>>d;
    n*=m;
    cin>>a[0];
    r=a[0]%d;
    for(i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%d!=r)
        {
            cout<<"-1";
            return 0;
        }
    }
    sort(a,a+n);
    r=a[n/2];
    for(i=0; i<n; i++)
        h+=abs(a[i]-r)/d;
    cout<<h;
}
