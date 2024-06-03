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
    int dsum=0;
    printf("Matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                dsum+=arr[i][j];
            }
        }
        
    }
    printf("Diagonal %d\n",dsum);
    int sdsum=0;
    //secondary diagonal
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i+j == size-1)
             sdsum+=arr[i][j];

            }
        
        
    }
    printf("Secondary coloum:%d\n",sdsum);
    
    return 0;
}