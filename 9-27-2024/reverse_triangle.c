#include <stdio.h>
int printpattern(int a){
    for(int i = a ; i >= 1 ; i--){
        for (int j = 1 ; j <= (a - i) ; j++){
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