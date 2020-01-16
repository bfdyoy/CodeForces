#include <iostream>

using namespace std;

int main()
{
    long long n,a=2;
    cin>>n;
    for(; a*a<=n; ++a)
        while(n%(a*a)==0)
            n/=a;
    cout<<n;
    return 0;
}
