#include <stdio.h>
#include <strings.h>
int main()
{
    int num=0, word=0,i;
    char sestence[100];
    char string[100][100];
    int n=0,j=0,m=0;
    char c;
    printf("Please input a sestence:");
    gets(sestence);
    for (i=0; (c = sestence[i])!='\0';i++)
    {
        if(c==' ')
            word = 0;
        else if(word==0)  //? word作用 防止多空格对单词数量的影响
        {
            word = 1;
            string[j][n] = sestence[i];
            num++;
        }
        if(word==0)
        {
            for (m = 0; m < n ;m++)
            {
                for (j = 0; string[j][n] != '\0';j++)
                {
                    if(string[j][n]!=string[j][m])
                        break;
                }
                if(string[j][n]=='\0')
                    num--;
            }
            n++;
            j = 0;
        }
    }
    printf("There are %d words in this sestence.\n", num);
    system("pause");
    return 0;
}
