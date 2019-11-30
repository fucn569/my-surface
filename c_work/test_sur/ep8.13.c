#include <stdio.h>
int main()
{
    int a[][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int(*p)[4], i, j;   //? [3]时与数组的行和列不匹配，去掉[4]时被降阶且*(*(p + i) + j)出现问题
    p = a;
    printf("intput:");
    scanf("%d %d", &i, &j);
    printf("a[%d,%d]=%d\n", i, j, *(*(p + i) + j));
    return 0;
}
