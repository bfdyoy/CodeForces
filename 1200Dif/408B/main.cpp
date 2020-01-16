#include <iostream>

using namespace std;
const int MAX = 26;
int A[MAX], B[MAX];

int main()
{
    string a, b;
    int ans = 0;
    cin >> a >> b;
    for(int i = 0; i < a.length(); ++i)
        A[a[i] - 'a']++;
    for(int i = 0; i < b.length(); ++i)
        B[b[i] - 'a']++;
    for(int i = 0; i < 26; ++i)
    {
        if(B[i] > 0 and A[i] == 0)
        {
            ans = 0;
            break;
        }
        ans += min(A[i], B[i]);
    }
    if(ans == 0)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}
