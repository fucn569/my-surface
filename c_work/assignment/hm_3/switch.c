#include <stdio.h>
int main()
{
    float one_cent=0, two_cent=0, five_cent=0,sum;
    float amount= 1,cent;
    int function_1(float x, float y);  //取小于方案数的最大分子数
    cent = 0.5;
    function_1(five_cent, cent, amount)













    while(0.5*five_cent>amount)
    {
        five_cent++;
    }
    five_cent -= 1;
    while(five_cent!=0)
    {
        if(0.5*five_cent==amount)
            printf("5cent%.0f 2cent%.0f 1cent%.0f\n", five_cent, two_cent, one_cent);
        else
            while(0.5*five_cent+0.2*two_cent>amount)
            {
                two_cent++;
            }
        two_cent -= 1;
        if(0.5*five_cent+two_cent*0.2==amount)
            printf("5cent%.0f 2cent%.0f 1cent%.0f\n", five_cent, two_cent, one_cent);
        else
            while(0.5*five_cent+0.2*two_cent+0.1*one_cent>amount)
            {
                one_cent++;
            }
        if(0.5*five_cent+0.2*two_cent+0.1*one_cent==amount)
            printf("5cent%.0f 2cent%.0f 1cent%.0f\n", five_cent, two_cent, one_cent);
    five_cent--;
    }

    /*{
        while(sum==amount)
        {


            sum = 0.5 * five_cent + 0.2 * two_cent + 0.1 * one_cent;
        }
        printf("5cent%.0f 2cent%.0f 1cent%.0f\n", five_cent, two_cent, one_cent);
    }*/
}
int fountion_1(float x,float y,float z)
{
    while(x*y>z)
    {
        x++;
    }
    x -= 1;
    return x;
}
