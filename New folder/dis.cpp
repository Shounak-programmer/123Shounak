#include <stdio.h>
int main() {
    printf("Enter your shopping amount: ");
    double a;
    scanf("%lf",&a);
    printf("press 1 if you're a member, (press any other number if not): ");
    int m;
    double dis,fin;
    scanf("%d",&m);
    if(m == 1 && a > 100){
      dis = 10;	
	}
	else if(m != 1 && a > 150){
		dis = 15;
	}
	else{
		dis = 0;
	}
	fin = a -a*dis/100;
	printf("You've secured %lf percent discount and you need to pay Rs. %lf",dis,fin);
    return 0;
}