#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("enter the no you want to  check\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("the number %d entered is negative\n", num);
    }
    else if(num > 0)
    {
        printf("the number %d entered is positive\n", num);
    }
    else
    {
        printf("the number %d entered is zero\n", num);
    }

    return (0);
}