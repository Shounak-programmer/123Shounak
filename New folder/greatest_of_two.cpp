#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if(a>b){
    	printf("Number %d is greatest.",a);
    	
	}
	else{
        printf("Number %d is greatest.",b);
	}
    return 0;
}
