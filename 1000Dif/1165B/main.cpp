#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;

int main()
{
    int next, n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    next = 1;
    for (int i = 0; i < n; i++)
        if (v[i] >= next)
            next++;

    cout << next-1 << endl;

    return 0;
}
