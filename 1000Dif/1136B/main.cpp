#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    //freopen("input.txt","rt",stdin);
    long long n,k;
    cin>>n>>k;
    long long sum = 2*n;
    sum += 1;
    long long p = k-1;
    long long q = n-k;
    if(p==0 || q==0)
    {
        sum += n-1;
    }
    else
    {
        if(p<q)
        {
            sum += p;
            sum += n-1;
        }
        else
        {
            sum += q;
            sum += n-1;
        }
    }
    cout<<sum<<endl;
}
