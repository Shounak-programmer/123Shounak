#include <stdio.h>
int main(){
    printf("Enter your basic salary: ");
    double sal;
    scanf("%lf", &sal);
    double HR, med, DA;
    HR =  sal*15/100;
    med = 500.0;
    DA = 50*sal/100;
    double Gross = sal + HR + med + DA;
    printf("\nBasic Salary: %lf \nDearence Allowance: %lf \nMedical Fees: %lf \nHouse Rent: %lf \n Gross Salary: %lf \n\n",sal,DA,med,HR,Gross);
   return 0;
}