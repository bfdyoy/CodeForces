#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,n1;
    cin>>n;

    int *a;
    a= new int[n+2];

    for (int i=1; i<=n+1; i++)
        a[i]=1;

    int r= sqrt(n+1);
    for (int i=2; i<=r; i++)
    {
        int j=2;
        while (i*j<=n+1)
        {
            a[i*j]=2;
            j++;
        }
    }
    int d=1;
    for (int i=2; i<=n+1; i++)
    {
        if (a[i]!=d)
        {
            d=2;
            break;

        }
    }
    cout<<d<<endl;
    for (int i=2; i<=n+1; i++)
        cout<<a[i]<<" ";
    delete[]a;
    return 0;
}
