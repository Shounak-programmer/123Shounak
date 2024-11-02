#include <stdio.h>
int main(){
    int a=1;
    for(int i = 0; i<5 ; i++){
        printf("|");
        for(int j = 0; j<5 ; j++){
            if(a<10){
                printf("%d    ",a);
                a++;
            }
            else{
        printf("%d   ",a);
        a++;
            }
    }
            printf("|");

    printf("\n");
    }
    return 0;
}