#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    for(int a = k-1; a >= 1; a--)
    {
        if(n%a == 0)
        {
            cout << n/a*k+a;
            break;
        }
    }
    return 0;
}
