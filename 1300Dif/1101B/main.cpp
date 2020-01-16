#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{

    int n;
    string en;
    cin>>en;
    n=en.length();
    int i=0,j=n-1;;
    while(i<n&&en[i]!='[')
        i++;
    i++;
    while(i<n&&en[i]!=':')
        i++;
    while(j>=0&&en[j]!=']')
        j--;
    j--;
    while(j>=0&&en[j]!=':')
        j--;
    if(j<=i)
    {
        printf("-1\n");
    }
    else
    {
        int res=4;
        for(i=i+1; i<j; i++)
            if(en[i]=='|')
                res++;
        printf("%d\n",res);
    }

    return 0;
}
