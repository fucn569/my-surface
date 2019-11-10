#include <stdio.h>
#include <strings.h>
int main()
{
    int num=0, word=0,i;
    char sestence[100];
    char c;
    printf("Please input the sestence:");
    gets(sestence);
    for (i; (c = sestence[i])!='\0';i++)
    {
        if(c==' ')
            word = 0;
        else if(word==0)  //?
        {
            word = 1;
            num++;
        }
    }
    printf("There are %d words in this sestence.\n", num);
    return 0;
}
