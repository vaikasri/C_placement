#include <stdio.h>
int main()
{
    int arr[5]={5,4,3,2,1};
    int n= ((sizeof(arr))/(sizeof arr[0]));
    for(int i=0;i<=n-1-i;i++)
    {
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1])
            {
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}