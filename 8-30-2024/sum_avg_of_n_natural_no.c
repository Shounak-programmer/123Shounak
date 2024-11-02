#include <stdio.h>
int main(){
    int n,sum = 0;
    float avg;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if(n > 0){
    printf("\n\nThe series of natural numbers are: \n");
    for (int i =1 ; i <= n ; i++){
        printf("%d ",i);
        sum += i;
    }
    avg = (float)sum / (float)n;
    printf("\nThe sum of the series of natural numbers are: %d",sum);
    printf("\nThe average of the series of natural numbers are: %f\n",avg);

    }
    else
    printf("Don't you know the meaning of natural number dumbass? ");
}