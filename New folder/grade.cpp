#include <stdio.h>
int main() {
    printf("Enter your score: ");
    int a;
    scanf("%d",&a);
    if(a>=85){
		printf("Grade A");
	}
	else if(a < 85 && a >= 75){
		printf("Grade B");
	}
	else if(a < 75 && a >= 50){
		printf("Grade C");
    }
	else if(a < 50 && a >= 30){
		printf("Grade D");
    }
    else{
    	printf("Fail");

	}
    

    return 0;
}