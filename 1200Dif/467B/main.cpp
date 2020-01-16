#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    long long int x[m+1],count1=0,c=0;
    for(int i=0; i<m+1; i++)
        cin>>x[i];
    long long int res;
    for(int i=0; i<m; i++)
    {
        count1=0;
        res=x[i]^x[m];
        while(res)
        {
            if(res&1)
                count1++;
            res=res>>1;
        }
        if(count1<=k)
            c++;
    }

    cout<<c;
    return 0;


}
