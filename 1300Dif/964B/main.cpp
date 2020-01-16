#include <iostream>
using namespace std;
int n,a,b,c,t,ans,ta;

int main()
{
    cin>>n>>a>>b>>c>>t;
    for(int i=1; i<=n; i++)
    {
        cin>>ta;
        if(b>c)
            ans+=a;
        else
            ans+=a+(t-ta)*(c-b);
    }
    cout<<ans;
    return 0;
}

