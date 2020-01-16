#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool isT = 1;
    long double ax, ay, bx, by, cx, cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;

    long double d1 = (bx-ax)*(bx-ax) + (by-ay)*(by-ay);
    long double d2 = (cx-bx)*(cx-bx) + (cy-by)*(cy-by);

    if(d1 != d2 || (ay-by)*(bx-cx) == (ax-bx)*(by-cy))
        printf("No");
    else
        printf("Yes");
}
