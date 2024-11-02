#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int a,b,cases,result;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the operation which you want to perform\n(1 = addition) \n(2 = substraction)\n(3 = multiplication)\n(4 = division)\n-----------------------------------------------\nEnter your choice: ");
    scanf("%d",&cases);
    switch(cases){
      case 1:
      result = a+b;
      printf("%d + %d = %d",a,b,result);
      break;

      case 2:
      result = a-b;
      printf("%d - %d = %d",a,b,result);
      break;

      case 3:
      result = a*b;
      printf("%d * %d = %d",a,b,result);
      break;

      case 4:
      result = a/b;
      printf("%d / %d = %d",a,b,result);
      break;

      default:
      printf("wrong Choice");
    }
}