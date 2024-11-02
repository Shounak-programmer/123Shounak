#include <stdio.h>

int main() {
    int i = 1, j = 0;

    while(i <= 5){
        j++;
        if(j % 3 == 0){
            printf("%d ",j);
            i++;
        }

    }

    return 0;
}
