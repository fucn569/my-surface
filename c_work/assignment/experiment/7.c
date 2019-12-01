#include <stdio.h>
#include <math.h>
int fun(int x,int y)
{
    int z;
    x=abs(x);
    y = abs(y);
    z = abs(x - y);
    return z;
}
int main()
{
    int a=1,b=-5,c;
    c=fun(a,b);
    printf("%d\n", c);
    return 0;
}

