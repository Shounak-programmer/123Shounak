#include <stdio.h>
int main(){
    printf("Enter your basic salary: ");
    double sal;
    scanf("%lf", &sal);
    double HRA = 0.00, TA = 0.00, DA = 0.00;
    if(sal >= 1000 && sal < 20000){
        HRA =  5000.0;
        TA = sal*5/100;
        DA = 10*sal/100;
    }
    else if( sal >= 20000 && sal < 30000){
        HRA =  7000.0;
        TA = sal*7/100;
        DA = 10*sal/100;

    }
    else if ( sal >= 30000){
        HRA =  10000.0;
        TA = sal*10/100;
        DA = 10*sal/100;

    }
    else{
        printf("Bro?");
    }
    
    double Gross = sal + HRA + TA + DA;
    printf("\nBasic Salary: %lf \nDearence Allowance: %lf \nTransport Allowance: %lf \nHouse Rent: %lf \n Gross Salary: %lf \n\n",sal,DA,TA,HRA,Gross);
   return 0;
}