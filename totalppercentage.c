#include<stdio.h>
#include<conio.h>
int main()
{
    int maths,physics,chem,bio,english,total;
    float avg,percentage;
    printf("enter the marks of maths sub\n");
    scanf("%d",&maths);
    printf("enter the marks of physics sub\n");
    scanf("%d",&physics);
    printf("enter the marks of chem sub\n");
    scanf("%d",&chem);
    printf("enter the marks of bio sub\n");
    scanf("%d",&bio);
    printf("enter the marks of english sub\n");
    scanf("%d",&english);
total= maths+physics+chem+bio+english;
avg= total/5;
percentage=(total*100)/500;
    printf("the total marks achieved is%d\n ", total);
    printf("the percentage achieved is%f\n ", percentage );
    printf("the avg scored achieved is%f\n ",avg);

    return(0);
}