#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < pair <int, int> > nums;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(make_pair(x, i));
    }

    sort(nums.rbegin(), nums.rend());

    int value = 0;
    for(int i = 0; i < n; ++i)
        value += (nums[i].first * i + 1);

    cout << value << endl;
    for(int i = 0; i < n; ++i)
        cout << nums[i].second + 1 << ' ';
    cout << endl;
    return 0;
}
