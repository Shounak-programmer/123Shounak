#include <stdio.h>
int main(){
    printf("Enter the weight: ");
    int a,n;
    float fin;
    scanf("%d" ,&a);
    if(a <= 10)
    fin = 10.0;
    else if(a > 10 && a <= 95){
        n = (a-11)/5 + 1;
        fin = 10.0 + n*3.5;
        
    }
    else
    fin = 69.5 + (a - 95)*2;
    printf("The total cost is: %.2f",fin);
}