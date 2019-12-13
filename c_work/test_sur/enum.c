#include <stdio.h>
int main()
{
    enum Weekday
    {
        mon,
        tue,
        wed,
        thu,
        fri,
        sat,
        sun
    };
    enum Weekday workday, weekend;
    workday = mon;
    weekend = sun;
    if(workday<weekend)
        printf("!!!");
    return 0;
}
