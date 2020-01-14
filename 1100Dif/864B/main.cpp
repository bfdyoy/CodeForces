#include <iostream>
#include <bits/stdc++.h>
using namespace std;
set <char> d;
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0; i<=n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            d.insert(s[i]);
        }
        else
        {
            ans = max(ans,(int)d.size());
            d.clear();
        }
    }
    cout<<ans;
    return 0;
}
