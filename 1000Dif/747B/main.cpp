#include <iostream>

using namespace std;

int N, act, gct, cct, tct;
char a[258];
int main()
{
    cin >> N;
    if(N % 4)
    {
        cout << "===\n";
        return 0;
    }
    for(int i = 1; i <= N; i++)
    {
        cin >> a[i];
        if(a[i] == 'A')
            act++;
        if(a[i] == 'G')
            gct++;
        if(a[i] == 'C')
            cct++;
        if(a[i] == 'T')
            tct++;
    }
    if(act > N / 4 || gct > N / 4 || cct > N / 4 || tct > N / 4)
    {
        cout << "===\n";
        return 0;
    }
    for(int i = 1; i <= N; i++)
    {
        if(a[i] != '?')
            cout << a[i];
        else
        {
            if(act < N / 4)
                cout << 'A', act++;
            else if(gct < N / 4)
                cout << 'G', gct++;
            else if(cct < N / 4)
                cout << 'C', cct++;
            else if(tct < N / 4)
                cout << 'T', tct++;
        }
    }
    cout << "\n";
    return 0;
}
