//Vscode
#include <stdio.h>
struct Fraction
{
    int num;
    int deno;
}frac;   //* frac为全局结构体变量
int Com;
int main()
{
    int ComDiv(int num1, int num2);
    int ComMul(int num1, int num2);

    struct Fraction RdcFrc(struct Fraction frac);
    struct Fraction Add(struct Fraction frac1, struct Fraction frac2);
    struct Fraction Sub(struct Fraction frac1, struct Fraction frac2);
    struct Fraction Mul(struct Fraction frac1, struct Fraction frac2);
    struct Fraction Div(struct Fraction frac1, struct Fraction frac2);

    struct Fraction frac1, frac2;
    char operator1, operator2,operator;

    printf("Please input the number1=?,number2=?,operator=?,deno1=?,deno2=?\n");
    while(1)
    {
        scanf("%d%c%d%c%d%c%d", &frac1.num, &operator1, &frac1.deno, &operator, &frac2.num, &operator2, &frac2.deno);
        if(frac1.deno!=0&&frac2.deno!=0)//排除0的影响
            break;
        printf("Error!Please input again:\n");
    }

    switch(operator)
    {
        case '+':
            Add(frac1,frac2);
            break;
        case '-':
            Sub(frac1,frac2);
            break;
        case '*':
            Mul(frac1,frac2);
            break;
        case '/':
            Div(frac1,frac2);
            break;
        default:
            printf("error!");
    }
    if(operator=='+'||operator=='-'||operator=='*'||operator=='/')  //防止重复输出
        printf("The result is %d/%d",frac.num,frac.deno);
    system("pause");
    return 0;
}
int ComDiv(int num1, int num2)   //公因数
{
    int r=1,i;
    while(r!=0)
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
    Com = ComDiv(num1, num2);
    return num1 * num2 / Com;
}
struct Fraction RdcFrc(struct Fraction frac)
{
    int ComDiv(int num1, int num2);
    int Com;
    Com = ComDiv(frac.num, frac.deno);
    frac.num = frac.num / Com;
    frac.deno = frac.deno / Com;
    return frac;
}
struct Fraction Add(struct Fraction frac1, struct Fraction frac2)
{
    int ComMul(int num1, int num2);
    struct Fraction RdcFrc(struct Fraction frac);
    frac.deno = ComMul(frac1.deno, frac2.deno);
    frac.num = frac.deno / frac1.deno * frac1.num + frac.deno / frac2.deno * frac2.num; //
    frac=RdcFrc(frac);    //* 赋结构体变量
    return frac;
}
struct Fraction Sub(struct Fraction frac1, struct Fraction frac2)
{
    int ComMul(int num1, int num2);
    struct Fraction RdcFrc(struct Fraction frac);
    frac.deno = ComMul(frac1.deno, frac2.deno);
    frac.num = frac.deno / frac1.deno * frac1.num - frac.deno / frac2.deno * frac2.num; //
    frac=RdcFrc(frac);
    return frac;
}
struct Fraction Mul(struct Fraction frac1, struct Fraction frac2)
{
    struct Fraction RdcFrc(struct Fraction frac);
    frac.deno = frac1.deno * frac2.deno;
    frac.num = frac1.num * frac2.num;
    frac=RdcFrc(frac);
    return frac;
}
struct Fraction Div(struct Fraction frac1, struct Fraction frac2)
{
    struct Fraction RdcFrc(struct Fraction frac);
    frac.deno = frac1.deno * frac2.num;
    frac.num = frac1.num * frac2.deno;
    frac=RdcFrc(frac);
    return frac;
}
