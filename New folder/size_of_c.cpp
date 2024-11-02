#include<stdio.h>
int main(){
    char c;
    int a;
    float b;
    double d;
    printf("The size of int is: %d" , sizeof(a));
    printf("The size of float is: %zu" , sizeof(b));
    printf("The size of double is: %lu" , sizeof(d));
    printf("The size of char is: %zu" , sizeof(c));

  return 0;
}