#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define LL long long
LL a,b;

int main()
{
    cin>>a>>b;
    if(b/2>=a)
    {
        cout << 0 << endl;
        return 0;
    }
    if(b%2==0)
        cout << min(a-(b/2),b/2-1) << endl;
    else
        cout << min(a-(b/2),b/2) << endl;
}
