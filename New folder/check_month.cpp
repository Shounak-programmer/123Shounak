#include <stdio.h>
int main(){
    printf("Enter month number:");
    int x;
    scanf("%d", &x);
    switch(x){
        case 1:
        printf("You've selected Januray month, consists of 31 days.");
        break;

        case 2:
        printf("You've selected February month, consists of 28 days.");
        break;

        case 3:
        printf("You've selected March month, consists of 31 days.");
        break;

        case 4:
        printf("You've selected April month, consists of 30 days.");
        break;

        case 5:
        printf("You've selected May month, consists of 31 days.");
        break;

        case 6:
        printf("You've selected June month, consists of 30 days.");
        break;

        case 7:
        printf("You've selected July month, consists of 31 days.");
        break;

        case 8:
        printf("You've selected August month, consists of 31 days.");
        break;

        case 9:
        printf("You've selected September month, consists of 30 days.");
        break;

        case 10:
        printf("You've selected October month, consists of 31 days.");
        break;

        case 11:
        printf("You've selected November month, consists of 30 days.");
        break;

        case 12:
        printf("You've selected December month, consists of 31 days.");
        break;

    }
    return 0;
}