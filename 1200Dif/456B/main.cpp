#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int l=n[n.length()-2]*10+n[n.length()-1];
    int ans;
    ans++;
    if(l%4==1)
        ans=ans+2+3+4;
    if(l%4==2)
        ans=ans+4+9+16;
    if(l%4==3)
        ans=ans+8+27+4;
    if(l%4==0)
        ans=ans+16+81+16;
    ans=ans%5;
    cout<<ans<<endl;
    return 0;
}
