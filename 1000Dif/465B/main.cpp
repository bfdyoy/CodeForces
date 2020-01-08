#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int x, count = 0, i = 0;;
    cin >> x;
    vector <int> v(x + 1);
    for(i=0; i<x; i++)
    {
        cin >> v[i];
    }
    for(i=0; i<x; i++)
    {
        if (v[i] == 1)
        {
            count++;
        }

        else if (v[i] == 0 && v[i + 1] == 1 && count == 0)
        {
            count ++;
            i += 1;
        }
        else if (v[i] == 0 && v[i + 1] == 1 && count > 0)
        {
            count += 2;
            i += 1;
        }
    }
    cout << count << endl;
}
