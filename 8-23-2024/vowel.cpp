#include <stdio.h>
int main(){
    printf("Enter a character: ");
    char a;
    scanf("%c",&a);
    switch(a){
        case 'a':
        printf("It's a vowel.");
        break;

        case 'e':
        printf("It's a vowel.");
        break;

        case 'i':
        printf("It's a vowel.");
        break;

        case 'o':
        printf("It's a vowel.");
        break;

        case 'u':
        printf("It's a vowel.");
        break;

        default:
        printf("It's a consonant.");
        break;
    }
    return 0;
}