#include <iostream>
using namespace std;
int main()
{
    int n,m=1,c=0;
    cin>>n;
    while(n)
    {
        if(n%10==4)
            c+=m;
        else
            c+=2*m;
        n/=10;
        m*=2;
    }
    cout<<c;
    return 0;
}
