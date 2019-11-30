#include <stdio.h>
void yesno(char ch)
{
    switch(ch)
    {
    case 'y':
    case 'Y': printf("\n This is YES.\n");
        break;   //填
    case 'n':
    case 'N': printf("\n This is NO.\n");
    }
}
int main()
{
    char ch;
    printf("\n Enter a char ‘y’,’Y’or ’n’,’N’:");
    ch =getchar();   //填
    printf("ch:%c",ch);
    yesno(ch);
    return 0;
}
