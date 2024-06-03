#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //sum of matrix rows
    for(int i=0;i<n;i++){
        int rsum=0;
        for(int j=0;j<n;j++){
            rsum+=arr[i][j];

        }
        printf("%d sum of rows %d.\n",i+1,rsum);
    }
    //sum of matrix coloum
    for(int j=0;j<n;j++){
        int Csum=0;
        for(int i=0;i<n;i++){
            Csum+=arr[i][j];

        }
        printf("Index %d is a sum of coloum %d.\n",j+1,Csum);
        
    }
    return 0;
}