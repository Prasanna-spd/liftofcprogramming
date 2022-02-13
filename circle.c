#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Hello Sarada\n");
int r,dia;
float area,circumference;
printf("enter the radius of the circle\n");
scanf("%d",&r);
dia=2*r;
area=3.14*r*r;
circumference=2*3.14*r;
printf("the diameter of the circle is %d\n",dia);
printf("the area of the circle is %f\n",area);
printf("the circumference of the circle is %f\n",circumference);
    return(0);
}