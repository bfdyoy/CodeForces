#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int MAXN = 1000 * 100;
int arr[MAXN + 10];
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cout << arr[0] << endl;
    int j = 1;
    while(k - 1 > 0 && j < n)
    {
        if(arr[j] != arr[j - 1])
        {
            k--;
            cout << arr[j] - arr[j - 1] << endl;
        }
        j++;
    }
    if(k - 1 != 0)
    {
        for(int i = 0; i < k - 1; i++)
            cout << 0 << endl;
    }
}
