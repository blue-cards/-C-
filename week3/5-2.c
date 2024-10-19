#include <stdio.h>

int main()
{
    int number=0;
    char letter;
    scanf("%d %c",&number,&letter);
    for(int i=0;i<5;i++)
    {
        printf("%d %c\n",number,letter);
        number++;
        letter++;
    }
    return 0;
}