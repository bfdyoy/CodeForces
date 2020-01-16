#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main ()
{

    long long int n, i, sum=0,cnt=0 ;
    cin >> n;

    if  (n%2!=0)
    {
        for (i=2 ; i*i<=n; ++i)
        {
            if (n%i==0)
            {
                sum=1 ;

                n-=i ;
                break ;
            }


        }
        if (sum==0)
            n-=n ;

        cnt++ ;
    }

    cout << cnt + n/2 ;

    return 0 ;

}
