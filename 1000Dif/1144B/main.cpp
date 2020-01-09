#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a[2005],even[2005],odd[2005];
int cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,cnt1=0,cnt2=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2 == 0)
            odd[cnt1++]=a[i];
        else
            even[cnt2++]=a[i];
    }
    sort(odd,odd+cnt1,cmp);
    sort(even,even+cnt2,cmp);
    int sum=0;
    if(cnt1>=cnt2)
    {
        for(int i=cnt2+1; i<cnt1; i++)
            sum+=odd[i];
    }
    else
    {
        for(int i=cnt1+1; i<cnt2; i++)
            sum+=even[i];
    }
    cout<<sum;
    return 0;
}
