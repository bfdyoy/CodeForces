#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100010];
    int n,x=1,y,i;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>arr[i];
    for(i=1; i<n; i++)
        if(arr[i]>arr[i+1])
        {
            x=i;
            break;
        }
    for(i=x; i<n; i++)
        if(arr[i]<arr[i+1])
        {
            y=i;
            break;
        }
    if(i==n)
        y=n;
    reverse(arr+x,arr+y+1);
    for(i=1; i<n; i++)
        if(arr[i]>arr[i+1])
            break;
    if(i!=n)
        cout<<"no";
    else
    {
        cout<<"yes\n";
        cout<<x<<" "<<y<<"\n";
    }
}
