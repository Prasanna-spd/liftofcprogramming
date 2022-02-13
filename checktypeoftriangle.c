#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3;
     printf("enter the three sides of the triangle \n");
    scanf("%d%d%d", &s1, &s2, &s3);
if (s1==s2&&s3==s2&&s3==s1)
{
    printf("the triangle is an equilateral triangle");
}
else if (s1==s2&&s2!=s3&&s1!=s3)
{
    printf("the triangle is an isosceles triangle");
}
else
{
    printf("the triangle is a scalene triangle");
}

    return(0);
}