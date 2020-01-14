#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d[150];
    for(int i=0; i<n; i++)
        cin>>d[i];
    sort(d,d+n);
    int b=d[n-1],a;
    for(int i=0; i<n-1; i++) //check
    {
        if(d[i]==d[i+1])
            a=d[i];
        else if(b%d[i]!=0)
            a=d[i];
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
