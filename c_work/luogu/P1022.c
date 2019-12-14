#include <stdio.h>
//ZL先生被主管告之，在计算器上键入的一个一元一次方程中，
//只包含整数、小写字母及+、-、=这三个数学符号（当然，符号“-”既可作减号，也可作负号）。
//方程中并没有括号，也没有除号，方程中的字母表示未知数。
int main()
{
    char equation[100000];
    char *unknown='\0';
    float res;

    gets(equation);
    float caculate(char *unk, char *equ);
    res = caculate(unknown, equation);
    printf("%c=%.3f", *unknown, res);
    return 0;
}

int check(char *p,int i)
{
    int j, jud=0;
    for (j; j<i; j++) {           //* 遍历一遍，看是否有字母，负号做符号只会出现在有字母时还有首位
        if(*(p+j)>57)
            jud = 1;                    //* 状态量
    }
    return jud;
}
void first()                     //* 刚刚开始或者'='后面
{

}
float caculate(char *unk, char *equ)
{
    char *loc;
    int i,j,loc_add=0;
    int jud_1=0;     //* 状态量
    float u, k;   //* u为未知量，k为常数
    int len;

    loc = equ;
    for (i=0; *(loc+i)=='\0'; i++) {
        if(*(loc+i)=='+')
        {
            if(loc_add==0)
                j = loc_add;
            else
                j = loc_add - 1;
            for (j; j<i; j++) {           //* 遍历一遍，看是否有字母，负号做符号只会出现在有字母时还有首位
                if(*(loc+j)>57)
                    jud_1 = 1;                    //* 状态量
            }
            if(jud_1==0)
            {
                if(loc_add==0)
                    j = loc_add;
                else
                    j = loc_add - 1;
                for (j; j<i; j++) {
                    len = i - loc_add;            //* 位数

            }
            }
        }
    }
}
int check(char *p,int i)
{
    int j, jud;
    for (j; j<i; j++) {           //* 遍历一遍，看是否有字母，负号做符号只会出现在有字母时还有首位
                if(*(loc+j)>57)
                    jud_1 = 1;                    //* 状态量
            }
}
