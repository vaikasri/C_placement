/*An array in C is a collection of elements (all of the same type), 
stored in contiguous memory locations. 
It allows storing multiple values using a single variable name.
*/
#include <stdio.h>
int main(){
    int arr[5]; //={1,2,3,4,5};
    scanf("%d",&arr);
    printf("%d",arr[3]);
}