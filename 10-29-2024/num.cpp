#include <iostream>
using namespace std;
int main(){
    printf("Enter the number of elements: ");
    int n,sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
       cout << "a[" << i << "] = " << endl;
       cin >> a[i];
       sum += a[i];
    }
    float mean = sum / n;
    float var;
    for(int i = 0; i < n; i++){
        var += (a[i] - mean)*(a[i] - mean);
    }
    var = var/n;


}