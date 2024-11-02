#include <stdio.h>
int main(){
    int a=1;
    for(int i = 0; i<10 ; i++){
        for(int j = 0; j<i ; j++){
            if (a < 10){
            printf("%d   ",a);
            }
            else if(a < 100){
               printf("%d  ",a); 
            }
            else{
                printf("%d ",a); 
            }
            a++;
        }
    printf("\n");
    }
}