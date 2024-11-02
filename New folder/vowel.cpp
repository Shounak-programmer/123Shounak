#include <stdio.h>
int main() {
    printf("Enter a character: ");
    char a;
    scanf("%c",&a);
    if((a>=97 && a <= 122)||(a>= 65 && a <= 90) ){
     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'|| a=='I' || a=='O' || a=='U'){
     printf("The enetred alphabet is a vowel");
	 }
	 else{
		printf("The enetred alphabet is a consonant");
	 }
    }
	else{
    printf("The enetred character is not an alphabet");
	}
    

    return 0;
}