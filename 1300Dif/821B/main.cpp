#include <iostream>
using namespace std;
int main()
{
    long long int m,b,s=0,x;
    cin>>m>>b;
    for(int i=0; i<=b; i++)
    {
        x=(b-i)*m;
        s=max(s,((i+1)*(x+1)*(i+x))/2);
    }
    cout<<s;
    return 0;
}
