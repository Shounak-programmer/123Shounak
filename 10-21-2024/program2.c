//9748673797 --> Dhruba Roy
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int ret = system("program1.exe");
    printf("Return value = %d\n",ret);
    if(ret == 0)
    printf("I can proceed\n");
    else
    printf("I can't proceed\n");
    return 0;
}