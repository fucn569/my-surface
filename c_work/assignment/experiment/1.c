#include <stdio.h>
int main()
{
    int a,b,c;
    int max(int x, int y);
    scanf("%d,%d",&a,&b);
    c = max(a,b);      /*函数调用 */
    printf("%d",c);
    return 0;
}

int max(int x,int y)
{
    int z;
    z = (x>y)?x:y;
    return(z);
}
