#include <stdio.h>
int printpattern(int a){
    a  = a/2 + 1;
    for(int i = 1 ; i <= a ; i++){
        if(i != (a-1)){
        for (int j = 1 ; j <= (a - i) ; j++){
            printf("  ");
        }
        for (int j = 1 ; j <= (a - i); j++){
            printf("* ");
        }
        }
        else{
            for (int j = 1 ; j <= (a - i + 1) ; j++){
            printf("  ");
        }
            for (int j = 1 ; j <= (a - i); j++){
            printf("* ");
        }
        }
        printf("\n");
    }
    a = a - 1;
    for(int i = a ; i >= 1 ; i--){
        for (int j = 1 ; j <= (a - i + 1) ; j++){
            printf("  ");
        }
        for (int j = 1 ; j <= (2*i - 1) ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
int main(){
    int a;
    printf("Enter the number of lines: ");
    scanf("%d",&a);
    printpattern(a);
    return 0;
}