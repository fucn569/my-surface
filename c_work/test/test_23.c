/*数组：一组有序数据的集合
方括号数字表示下标（使元素唯一确定）
数组分多维，一维数组最简单，用一个下标表示
定义数组 int a[10];定义了一个整型数组，数组名为a，包含10个整型元素，下标顺序从0开始
常量表达式可包含常量和符号常量int a[3+5]; 不能包含变量（不允许对数组大小做动态变化）但可以用a[i]
引用一维数组时只能引用数组元素而不能一次整体调用全部元素的值
    例:a[0]=a[5]+a[7]-a[2*3]

二维数组（坐标）（数组套数组）
定义 float a[3][4],b[5][10];
初始化方式
int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};


*/

#include <stdio.h>
int main()
{
    int a[10];
    int i;
    //**int a[10]={0,1,2,3,4,5,6,7,8,9};
    //? int a[10]={0,1,2,3,4}; = int a[10]={0,1,2,3,4,0,0,0,0,0};
    for (i = 0; i < 10;i++)
        {
            a[i] = i;
        }
    for (i=9; i >=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
