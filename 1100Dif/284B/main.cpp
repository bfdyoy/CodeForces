#include <iostream>

using namespace std;
#define ll long long
int main()
{
    ll a,cntI=0,cntA=0;
    string s;
    cin >> a >> s;
    for(ll i=0; i<a; i++)
    {
        if(s[i]=='I')
            cntI++;
        else if(s[i]=='A')
            cntA++;
    }
    if(cntI>1)
        cout<<0<<endl;
    else if(cntI==1)
        cout<<1<<endl;
    else if(cntA==0)
        cout<<0<<endl;
    else
        cout << cntA<<endl;
    return 0;
}
