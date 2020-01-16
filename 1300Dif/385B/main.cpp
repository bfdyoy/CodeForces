#include <iostream>
using namespace std;
long long int sum,o=2;
string s;
int main()
{
    cin>>s;
    for(int i=3; i<s.length(); i++)
        if(s.substr(i-3,4)=="bear")
            sum+=(i-o)*(s.length()-i),o=i;
    cout<<sum<<endl;
    return 0;
}
