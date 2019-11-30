#include <stdio.h>
int main()
{
    int ComDiv(int num1, int num2);
    int ComMul(int num1, int num2);
    int a, b,c,d;
    scanf("%d %d", &a, &b);
    c = ComDiv(a, b);
    d=ComMul(a, b);
    printf("ComDiv:%d\nComMul:%d\n",c,d);
    return 0;
}
int ComDiv(int num1, int num2)   //公因数
{
    int r=1,i;
    while(r)
        {
                if (num1 < num2)
                {
                    i = num1;
                    num1 = num2;
                    num2 = i;
                }
                r = num1 % num2;
                num1 = r;
        }
        return num2;
}
int ComMul(int num1, int num2)   //公倍数
{
    int ComDiv(int num1, int num2);
    int Com;
    Com = ComDiv(num1, num2);
    return num1 * num2 / Com;
}
