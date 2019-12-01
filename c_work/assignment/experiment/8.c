//Vscode
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int i, j,t;
    gets(a);
    j = strlen(a);
    for (i = 0; i < j;i++)
    {
        t = a[i];
        a[i] = a[j - 1];
        a[j - 1] = t;
        j--;
    }
    printf("%s", a);
    return 0;
}
