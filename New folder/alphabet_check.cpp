
#include <stdio.h>

int main() {
    printf("Enter a character: ");
    char a;
    scanf("%c",&a);
    if((a>='A' && a <= 'Z')||(a>= 'a' && a <= 'z') ){
    printf("The enetred character is an alphabet");
	}
	else{
    printf("The enetred character is not an alphabet");
	}

    return 0;
}

