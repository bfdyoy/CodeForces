#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[n];
        for(int i=0; i<n; i++)
            arr[i]=s[i]-'0';
        int maxa=n;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                if(maxa<(i+1)*2)
                    maxa=(i+1)*2;
            }
        }
        for(int i=n; i>=0; i--)
        {
            if(arr[i]==1)
            {
                if(maxa<(n-i)*2)
                    maxa=(n-i)*2;
            }
        }
        cout<<maxa<<endl;
    }
    return 0;
}
