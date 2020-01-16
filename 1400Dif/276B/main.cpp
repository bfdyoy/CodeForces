#include<cstdio>
#include<iostream>
int main()
{
    int n,a;
    char c;
    while(std::cin>>c)
    {
        ++n;
        a=a^(1<<(c-'a'));
    }
    if(a==0||n%2==1)
        puts("First");
    else
        puts("Second");
    return 0;
}
