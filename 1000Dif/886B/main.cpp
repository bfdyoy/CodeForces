#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ans[200001];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans[a[i]] = n - i;
    }
    int h = 0, j = 0;
    for(int i = 0; i < 200001; i++)
    {
        if(ans[i] > h)
        {
            h = ans[i];
            j = i;
        }
    }
    cout << j;
    return 0;
}
