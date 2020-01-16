#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n,t;
int a[100001];
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        a[t]++;
    }
    int fc=1;
    for(int i=2; i<=100000; i++)
    {
        int tc=0;
        for(int j=i; j<=100000; j+=i)
            tc+=a[j];
        fc=max(tc,fc);
    }
    cout<<fc;
    return 0;
}
