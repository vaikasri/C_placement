//#include <stdio.h>
//int_min  min num in integer
#include <stdio.h>
int main(){
    int arr[]={10,50,30,28,40,81,};
    int max=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<=length-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("%d",max);
}