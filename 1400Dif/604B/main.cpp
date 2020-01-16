#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d", &n,&k);
    vector<int>v(n);
    for(int i=0; i<n; i++)
        scanf("%d", &v[i]);
    n = max(n-k,0);
    for(int i=0; i<n; i++)
        v[n+i]+=v[n-i-1];
    printf("%d", *max_element(v.begin(), v.end()));
}
