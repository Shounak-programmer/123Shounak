#include <stdio.h>
int main(){
    int t;
    printf("Enter the term of the series: ");
    scanf("%d",&t);
    for(int i = 0; i<10 ; i++){
        for(int j = 0; j<(10-i) ; j++){
            printf("  ");
        }
        for(int j = 0; j<i ; j++){
            printf("* ");
        }
    printf("\n");
    }
}