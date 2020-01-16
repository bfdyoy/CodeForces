#include<iostream>
using namespace std;
int n,a,b,c,ans;
main()
{
    cin>>n;
    for(a=1; a<=n; a++)
        for(b=a; b<=n; b++)
        {
            c=a^b;
            if(c<=n && c>=b && a+b>c)
                ans++;
        }
    cout<<ans;
}
