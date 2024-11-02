#include <stdio.h>
int main(){
    int a;
    printf("Enter the term of the table: ");
    scanf("%d", &a);
    for(int i = 1; i<=10 ; i++){
        int res = a*i;
        printf("|");
        printf("%d x %d = %d",a,i,res);
        if (res < 100){
            printf("  |");
        }
        else{
        printf(" |");
        }

    printf("\n");
    }
}