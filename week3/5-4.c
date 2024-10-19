#include <stdio.h>

int main()
{
    const float change_foot=30.48;
    const int change_inch=12;
    float number=0;
    float inch=0;
    int foot=0;
    scanf("%f",&number);
    while(number>0)
    {
       foot=number/change_foot;
       inch=(number-foot*change_foot)/change_foot*change_inch;
       printf("%d %.1f\n",foot,inch);
       scanf("%f",&number);
    }
    return 0;
}