#include <stdio.h>
const int n = 3;
struct Student
{
    int num;
    char name[20];
    float score[3];
    float aver;
};
int main()
{
    void input(struct Student stu[]);
    struct Student max(struct Student stu[]);   //? 返回一个struct Student类型的变量
    void print(struct Student stu);
    struct Student stu[n], *p = stu;
    input(p);
    print(max(p));
    return 0;
}
void input(struct Student stu[])
{
    int i;
    printf("input\n");
    for (i = 0; i < n;i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}
struct Student max(struct Student stu[])
{
    int i, m = 0;
    for (i = 0; i < n;i++)
        if(stu[i].aver>stu[m].aver)
            m = i;
    return stu[m];   //*结构体变量
}
void print(struct Student stud)
{
    printf("The best student is:\n");
    printf("ID:%d\nname:%s\nscore:%5.1f,%5.1f,%5.1f\naver:%6.2f\n",
        stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
}
