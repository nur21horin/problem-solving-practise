#include<stdio.h>
int main(){
    int arr[100];
    int i,n,sum=0;
    printf("Enter the size of the array;");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
        }
        printf("%d is the sum of arrays element.\n",sum);
    return 0;
}