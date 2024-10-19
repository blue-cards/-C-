#include <stdio.h>

int main()
{
    int number=0;
    int anser=0;
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        anser+=i;
    }
    printf("%d",anser);
    return 0;
}