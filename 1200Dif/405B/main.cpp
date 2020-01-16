#include <iostream>
#include <cstdio>
char s[5000];
int r[5000];
int l[5000];
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%s",s);
    for(b=0,c=0; b<a; b++)
    {
        if(c>0)
        {
            c++;
        }
        if(s[b]=='R')
        {
            c=1;
        }
        if(s[b]=='L')
        {
            c=0;
        }
        r[b]=c;
    }
    for(b=a-1,c=0; b>=0; b--)
    {
        if(c>0)
        {
            c++;
        }
        if(s[b]=='L')
        {
            c=1;
        }
        if(s[b]=='R')
        {
            c=0;
        }
        l[b]=c;
    }
    for(b=0,c=0; b<a; b++)
    {
        if(r[b]==l[b])
        {
            c++;
        }
    }
    printf("%d\n",c);
}
