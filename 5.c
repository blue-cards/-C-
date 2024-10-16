#include <stdio.h>
int main()
{  float c,f;
   printf("Please enter a Fahrenheit temperature:\n");
   scanf("%f",&f);
   c=(5.0/9.0)*(f-32);
   printf("%.2f\n",c);
   return 0;
}