#include <iostream>

using namespace std;

int n,a[200005],l[200005],r[200005];

int main()
{
    cin >> n;
    l[0]=1000000000;
    r[n+1]=1000000000;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        if(!a[i])
            l[i]=0;
        else
            l[i]=l[i-1]+1;
    }
    for(int i=n; i; i--)
    {
        if(!a[i])
            r[i]=0;
        else
            r[i]=r[i+1]+1;
    }
    for(int i=1; i<=n; i++)
    {
        cout << min(l[i],r[i]) << ' ';
    }
}
