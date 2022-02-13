#include<stdio.h>
#include<conio.h>
int main(){
 int num;
  int r;
    printf("Enter the no you want to check\n");
    scanf("%d", &num);
   r=num%2;
   switch (r)
   {
   case 0:
     printf("the entered number %d is even", num);
       break;
   
   default:
        printf("the entered number %d is odd", num);
       break;
   }

  
    return(0);
}