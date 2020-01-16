#include <iostream>
using namespace std;
string s;
int k, i,b;
int main ()
{
    cin>>s;
    for(i=s.size()-1; i>=0; i--)
        if(s[i]=='b')
            b++;
        else
        {
            k=(k+b)%1000000007;
            b=(b*2)%1000000007;
        }
    cout<<k<<endl;
}
