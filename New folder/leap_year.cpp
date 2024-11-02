#include <stdio.h>

int main() {
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);
    
    if(a%100 == 0){
    	if(a%400 == 0){
    		printf("It's Leap year.");
		}
    	else{
    		printf("It's not a Leap year.");
		}
    	
	}
	else{
		if(a%4 == 0){
    		printf("It's Leap year.");
		}
    	else{
    		printf("It's not a Leap year.");
		}

	}
    return 0;
}