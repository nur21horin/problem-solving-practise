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
    printf("Matrix:");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        printf("%d\n",arr[i][j]);
    }}
    printf("sum of Diagonal array:");
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
       
    }
    printf("%d\n",sum);
   
    printf("Sum of Rows:");
    for(int i=0;i<size;i++){
         int rowsum=0;
        for(int j=0;j<size;j++){
            
                rowsum+=arr[i][j];
            
        }
        printf("Row %d: %d \n",i+1,rowsum);
    }
    
    printf("Matrix coloum:\n");
   printf("Sum of Columns:\n");
for (int j = 0; j < size; j++) {
    int colsum = 0;
    for (int i = 0; i < size; i++) {
        colsum += arr[i][j];
    }
    printf("Column %d: %d\n", j, colsum);
}

return 0;
}