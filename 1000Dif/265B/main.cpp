#include <iostream>
using namespace std;

int main()
{
    int n,i,x,prev=0,time=-1;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> x;
        if(x>=prev)
            time+=x-prev+1;
        else
            time+=x+prev+1-2*x;
        prev=x;
        time++;
    }
    cout << time;
    return 0;
}
