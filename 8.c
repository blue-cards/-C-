#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f %f",&a,&b);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",a,b);
    float d=b/a*8;
    printf("downloads in %.2f seconds.",d);
    return 0;
}