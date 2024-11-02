#include <stdio.h>
int main(){
    printf("\n\n\n------------------------------------------\nEnter your marks in five subjects. ");
    int a,b,c,d,e;
    printf("\nEnter your marks in english : ");
    scanf("%d",&a);
    printf("Enter your marks in maths : ");
    scanf("%d",&b);
    printf("Enter your marks in science : ");
    scanf("%d",&c);
    printf("Enter your marks in computer : ");
    scanf("%d",&d);
    printf("Enter your marks in history : ");
    scanf("%d",&e);
    int avgto100 = (a+b+c+d+e)/10;
    char grade;
    if (avgto100 >= 90)
    grade = 'S';
    else if(avgto100 >= 80)
    grade = 'A';
    else if(avgto100 >= 70)
    grade = 'B';
    else if(avgto100 >= 60)
    grade = 'C';
    else if(avgto100 >= 50)
    grade = 'D';
    else
    grade = 'F';
    printf ("\n\n------------------------------------------\nTotal Marks = 1000\nOverall Percentage = %d\nGrade = %c\n------------------------------------------\n",avgto100,grade);

    

}