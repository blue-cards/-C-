#include <stdio.h>

int main()
{
    float mile=0;
    float gas=0;
    const float change_mile=1.609;
    const float change_gas=3.785;
    scanf("%f,%f",&mile,&gas);
    double America=mile/gas;
    double Europe=gas*change_gas/((mile*change_mile)/100);
    printf("the miles-per-gallon value is: %.1f\n",America);
    printf("the liters-per-100-km value is: %.1f",Europe);// 250.000001 .1f 250.0 .2f 250.00
    return 0;
}