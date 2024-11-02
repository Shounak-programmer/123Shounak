#include <stdio.h>
int main(){
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    
    if(n > 0){
    printf("\n\nThe series of odd natural numbers are: \n");
    for (int i =1 ; i <= n ; i++){
        if( i%2 != 0){
        printf("%d ",i);
        }
    }
    printf("\n\nThe series of even natural numbers are: \n");
    for (int i =1 ; i <= n ; i++){
        if( i%2 == 0){
        printf("%d ",i);
        }
    }
    }
    else
    printf("Don't you know the meaning of natural number dumbass? ");
}