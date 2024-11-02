#include <stdio.h>
int main() {
    printf("Enter a character: ");
    char a;
    scanf("%c",&a);
    if((a>=97 && a <= 122)||(a>= 65 && a <= 90) ){
     if((a>= 65 && a <= 90)){
     printf("The enetred alphabet is uppercase.");
	 }
	 else{
		printf("The enetred alphabet is lowercase.");
	 }
    }
	else{
    printf("The enetred character is not an alphabet.");
	}
    

    return 0;
}