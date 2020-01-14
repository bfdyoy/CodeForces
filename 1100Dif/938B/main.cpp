#include <iostream>

using namespace std;



int main()
{
    size_t n;
    cin >> n;

    size_t result = 0;
    for (size_t i = 0; i < n; ++i)
    {
        size_t pos, ct;
        cin >> pos;

        ct = min(pos - 1, 1000000 - pos);
        if (result < ct)
        {
            result = ct;
        }
    }

    cout << result;
}
