#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter a number: ");
    int a;
    scanf("%d",&a);
    int b = a,tmp,sum = 0;

    while (b > 0){
     tmp = b % 10;
     b = b / 10;
     sum += pow(tmp,3);

    }
    if(a == sum){
        printf("It's an armstrong number.");
    }
    else
    printf("Not an armstrong number.");
}