#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n,s,a[200005];

int main()
{
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    long long ans =0;
    for(int i=0; i<=n/2; i++)
    {
        if(a[i]>s)
            ans+=a[i]-s;

    }

    for(int i=n/2; i<n; i++)
        if(a[i]<s)
            ans+=s-a[i];
    cout<<ans<<endl;
    return 0;
}
