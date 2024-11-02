

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2 == 0){
    	printf("It's Even number.");
    	
	}
	else{
		printf("It's odd number.");

	}
    return 0;
}