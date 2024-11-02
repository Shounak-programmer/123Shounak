#include <stdio.h>
int main (){
    printf("Enter the no of hours you worked: ");
    int hour;
    float sal;
    scanf("%d",&hour);
    if(hour <= 25)
    sal = hour * 10;
    else if(hour <= 55)
    sal = 25*10 + (hour - 25)*15;
    else 
    sal = 250 + 30 * 15 + (hour-55)*20;
    printf("Your salary is: %f", sal);
}