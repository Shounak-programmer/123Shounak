#include <stdio.h>
void disp(int array[], int sizee){
 for(int i = 0 ; i < sizee ; i++){
        printf("array [%d] = %d\n",i,array[i]);
    }
}
void sumavg(int array[], int sizee){
    int sum = 0;
 for(int i = 0 ; i < sizee ; i++){
    sum = sum+array[i];
  }
  int avg = sum / sizee;
  printf("The sum of the Elements of the array: %d\nThe average of the elements of the array: %d",sum,avg);
}
void maxmin(int array[], int sizee){
    int max = array[0],min = array[0];
    for(int i = 0 ; i < sizee ; i++){
    if(array[i] > max)
    max = array[i];
    if (array[i] < min)
    min = array[i];
    }
    printf("\nMaximum Value: %d\nMinimum Value: %d",max,min);
}
void search(int array[], int sizee){
    int sr,val = 0,m = 0;
    int pos[sizee];
    for(int i = 0 ; i < sizee ; i++){
        pos[i] = 0;
    }
    printf("Enter the element to search: ");
    scanf("%d",&sr);
 for(int i = 0 ; i < sizee ; i++){
    if(array[i] == sr){
        val++;

        pos [m] = i;
        m++;
    }
    }
    if(val == 0){
        printf("Element not Found!");

    }
    else{
        int c=0;
        printf("Element found %d times in positions ",val);
        for(int i = 0 ; i < sizee ; i++){
            if(pos[i] != 0){
              printf("%d, ",pos[i]);
              c++;
            }
        }
        printf("and %d",pos[c+1]);

    }
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int a[size];

    printf("\nEnter the elements of the array: \n");
    for(int i = 0 ; i < size ; i++){
        printf("array [%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf ("What do you wanna do now? \n1 ---------> Display the array\n2 ---------> Calculate and display the sum and average of the elements in the array.\n3 ---------> Find and display the maximum and minimum element in the array. \n4 ---------> Accept a value from the user and check if it is present in the array.\nEnter your choice: ");
    int choice;
    scanf("%d",&choice);

    switch(choice){
        case 1:
        disp(a,size);
        break;
        case 2: 
        sumavg(a,size);
        break;
        case 3:
        maxmin(a,size);
        break;
        case 4:
        search(a,size);
        break;
        default:
        printf("Wrong input!!!");
        break;
    }
    return 0;
    
}