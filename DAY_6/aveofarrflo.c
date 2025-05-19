#include <stdio.h>
int main(){
    int size,sum=0;      //int size
    scanf("%d",&size);   //float sum=0
    int arr[size];
    for( int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    sum += arr[i];
    }
    float avg=(float)sum/size; //type casting  //int to float   Implicit Casting 
    printf("%f",avg);          // no value can change
}

//Explicit Casting
//char to string change to '' "" 