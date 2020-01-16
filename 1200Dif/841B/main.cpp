#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x & 1)
            flag = 1;
    }
    if(flag)
        cout << "First";
    else
        cout << "Second";

    return 0;
}


