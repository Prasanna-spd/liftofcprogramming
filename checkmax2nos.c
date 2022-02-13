#include <stdio.h>
#include <conio.h>
int main()
{
    float num1, num2;
    printf("Enter the first no you want to compare \n");
    scanf("%f", &num1);
    printf("Enter the second no you want to  compare  \n");
    scanf("%f", &num2);

    if (num1 > num2)
    {

        printf("%f no is greater than %f", num1, num2);
    }
    else
    {
        printf("%f no is greater than %f", num2, num1);
    }

    return (0);
}