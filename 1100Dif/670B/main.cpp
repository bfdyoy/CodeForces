#include<iostream>

using namespace std;

int n, k, size = 0;
int arr[100000];

int main()
{
    cin >> n >> k;
    while (n--)
        cin >> arr[size++];
    for (int i = 0; i < size; i++)
    {
        if (k > i+1)
        {
            k = k - (i + 1);
        }
        else
        {
            cout << arr[k - 1] << endl;
            return 0;
        }
    }
}
