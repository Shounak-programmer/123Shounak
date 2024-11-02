#include <stdio.h>
int main(){
    int a,i,j,c = 1;
    printf("Enter the term of the series (Number of ines) : ");
    scanf("%d",&a);
    for(i = 1 ; i <= a ; i++){
        for(j = a ; j >= i ; j--){
          printf("   ");
        }
        for(j = 1 ; j <= i ; j++){
          if(c > 1000)
          printf("%d  ",c);
          else if(c > 100)
          printf("%d   ",c);
          else if(c > 10)
          printf("%d    ",c);
          else
          printf("%d     ",c);

          c++;
        }
       printf("\n");
    }
}