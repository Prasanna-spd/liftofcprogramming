#include<stdio.h>
#include<conio.h>
int main()
{
 int length;
 printf("enter the length in centimeters\n");
 scanf("%d",& length);
float l1= length/100;
float l2= length/100000;
printf("the length in meter is %f\n" ,l1);
printf("the length in kilometer is %f\n" ,l2);


    return(0);
}