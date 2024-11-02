#include <stdio.h>
int main(){
    printf("\n------------------------------------------\nEnter the Book Price: ");
    int p,dis_p;
    scanf("%d",&p);
    if(p <= 100)
    dis_p = 10;
    else if(p <= 200)
    dis_p = 15;
    else if(p <= 300)
    dis_p = 20;
    else if(p <= 400)
    dis_p = 25;
    else
    dis_p = 30;
    int fin = p - (p*dis_p/100);
    printf("\n------------------------------------------\nPrice = %d\nDiscount = %d\nDiscounted Price = %d",p,dis_p,fin);
}