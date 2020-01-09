#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10000];
    int b[10000];
    for(int i=1; i<=n; i++)
        cin>>a[i];


    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
            b[k]=0;

        b[i]++;
        int j=i;
        while(true)
        {
            b[a[j]]++;
            if(b[a[j]]>=2)
            {
                cout<<a[j]<<" ";
                break;
            }
            j = a[j];
        }
    }

    return 0;

}
