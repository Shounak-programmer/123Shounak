#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if(a>b){
    	if(a>c){
    		printf("Number %d is greatest.",a);
		}
		else{
			printf("Number %d is greatest.",c);
		}
    	
    	
	}
	else{
		if(b>c){
			printf("Number %d is greatest.",b);
		}
		else{
			printf("Number %d is greatest.",c);
		}
	}
    return 0;
}