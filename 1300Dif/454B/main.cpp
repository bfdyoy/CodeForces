#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,d=0;
    cin>>n;
    long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0&&a[i]<a[i-1])
        {
            c++;
            d=i;
        }
    }
    if(c==0)
    {
        cout<<0;
    }
    else
    {
        if(c==1&&a[n-1]<=a[0])
            cout<<n-d;
        else
            cout<<-1;
    }
    return 0;
}
