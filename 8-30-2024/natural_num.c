#include <stdio.h>
int main(){
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if(n > 0){
    for (int i =1 ; i <= n ; i++){
        printf("%d ",i);
    
    }
    }
    else
    printf("Don't you know the meaning of natural number dumbass? ");
}