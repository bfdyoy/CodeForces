#include <iostream>
using namespace std;

int main()
{
    int n,a;
    cin>>n>>a;
    cout<<"2 1 "<<min(n,max(3,2+(n*a+90)/180))<<endl;
    return 0;
}
