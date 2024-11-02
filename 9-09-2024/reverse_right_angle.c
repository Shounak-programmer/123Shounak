#include <stdio.h>
int main(){
    int ii = 1;
    for(int i = 0; i<10 ; i++){
        for(int j = 0; j<(10-i) ; j++){
            printf("  ");
        }
        for(int j = 0; j<i ; j++){
            if(ii > 9){
            ii = 1;
        }
            printf("%d ",ii);
            ii++;
        }
    printf("\n");
    }
}