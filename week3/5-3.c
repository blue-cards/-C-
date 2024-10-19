#include <stdio.h>

int main()
{
    int number=0;
    int day=0;
    int week=0;
    scanf("%d",&number);
    while(number>0)
    {
        week=number/7;
        day=number-week*7;
        printf("%d %d\n",week,day);
        scanf("%d",&number);
    }
    return 0;
}