#include <stdio.h>

int main()
{
    int number=0;
    int thousand=0;
    int hundred=0;
    int ten=0;
    int one=0;
    scanf("%d",&number);
    thousand=number/1000;
    hundred=number/100%10;
    ten=number/10%10;
    one=number%10;
    one+=7;
    ten+=7;
    hundred+=7;
    thousand+=7;
    one=one%10;
    ten=ten%10;
    hundred=hundred%10;
    thousand=thousand%10;
    int change=0;
    change=thousand;
    thousand=ten;
    ten=change;
    change=hundred;
    hundred=one;
    one=change;
    change=thousand*1000+hundred*100+ten*10+one;
    printf("%d",change);
    return 0;
}