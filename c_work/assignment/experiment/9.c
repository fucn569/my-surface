#include <stdio.h>
#include <math.h>
int main()
{
    int a,i;
    scanf("%d", &a);
    for (i = 0; a > pow(10,i);i++)
        ;
    void output(int x, int n);
    output(a,i);
    return 0;
}
void output(int x,int n)
{
    char a[n];
    if(n<0)
        printf("%s\n", a);
    else
        a[n] = x % 10;
    output(x / 10, n - 1);
}
