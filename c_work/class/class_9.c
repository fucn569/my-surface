#include <stdio.h>
int main()
{
    int a = 100, b = 10;
    // ?p=&a;*p=1
    int *pointer_1, *pointer_2;    //表示指针变量
    pointer_1 = &a;              //? *表示地址代表的值
    pointer_2 = &b;
    printf("a=%d,b=%d\n",a,b);
    //a = 1;
    //b = 2;
    printf("*pointer_1=%d,pointer_2=%d\n",*pointer_1,*pointer_2);
    *pointer_1 = 3;//指向的值
    *pointer_2 = 4;
    printf("*pointer_1=%d,pointer_2=%d\n",*pointer_1,*pointer_2);
    printf("*pointer_1=%o,pointer_2=%o,",pointer_1,pointer_2); //*八进制输出地址
    return 0;
}
