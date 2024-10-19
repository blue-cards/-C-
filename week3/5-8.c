#include <stdio.h>

int main()
{
    char a=0;
    char b=0;
    scanf("%c",&a);
    b=(a-65-2+26)%26+65;
    printf("%c->%C",a,b);
    return 0;
}