#include <stdio.h>
int main(){
    printf("Enter number of rows: ");
    int a;

    scanf("%d",&a);
    a=a/2+1;
    for (int i = 1; i<=a ; i++){
        for(int j=1; j <= (a-i) ; j++){
            printf("  ");
        }
        for(int j=1; j <= ((i*2)-1) ; j++){
            printf("* ");
        }
        printf("\n");
    }
   a--;

    for (int i = a; i>=1 ; i--){
        for(int j=1; j <= (a-i)+1 ; j++){
            printf("  ");
        }
        for(int j=1; j <= ((i*2)-1) ; j++){
            printf("* ");
        }
        printf("\n");
    }
}