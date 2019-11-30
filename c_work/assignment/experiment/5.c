#include <stdio.h>
int main()
{
    int a;
    void judge(int a);
    scanf("%d", &a);
    judge(a);
    return 0;
}
void judge(int a)
{
    int i, r=0,j;
    for (i = 2; i <= sqrt(a);i++)
    {
        j = a % i;
        if(j==0)
        {
            r=1;
            break;
        }
    }
    if(a<=1)
        r = 1;
    if(r==0)
        printf("yes\n");
    else
        printf("no\n");
}
