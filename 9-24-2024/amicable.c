#include <stdio.h>
int amicable(int m, int n){
    int a = 0 ,b = 0, max;
    if (m>n)
    max = m;
    else 
    max = n;
    for (int i = 1 ; i < max ; i++){
        if(m % i == 0 && i < m){
           a += i;
        }
        if(n % i == 0 && i < n){
           b += i;
        }
    }
    printf("\nSum of all factors of %d = %d \nSum of all factors of %d = %d\n Hence,\n       ",m,a,n,b);
    if(a == n && b == m)
    return 1;
    else
    return 0;
}
int main(){
   printf("\n------------------------------------\nEnter the numbers: \n");
   int m,n;
   scanf("%d%d",&m ,&n);
   if(amicable(m,n) == 1){
   printf("The given numbers are friendly/amicable numbers.\n\n\n");
   }
   else
      printf("The given numbers are not friendly/amicable numbers.\n\n\n");

}