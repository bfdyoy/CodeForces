#include<iostream>
using namespace std;
int main()
{
    long long l=0;
    int n;
    cin>>n;
    int a;
    int j=0;
    int s=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(s)
        {
            if(a==1)
            {
                l*=j+1;
                j=0;
            }
            else
                j++;
        }
        if(a==1 && s!=1)
            s=1,l=1;
    }
    cout<<l;
}
