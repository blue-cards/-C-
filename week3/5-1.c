#include <stdio.h>

int main()
{
    const int change=0;
    int number=0;
    int hour=0;
    int minute=0;
    scanf("%d",&number);
    while(number>0)
    {
       hour=number/60;
       minute=number-hour*60;
       printf("%d %d\n",hour,minute);
       scanf("%d",&number);
    }
    return 0;
}