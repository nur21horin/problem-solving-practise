#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<size;j++){
        int csum=0;
        for(int i=0;i<size;i++){
            csum+=arr[i][j];
        }
        printf("%d\n",csum);
    }
        return 0;
}