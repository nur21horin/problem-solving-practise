#include<stdio.h>
int main(){
    int num;
    //input the number
    printf("Enter the number:");
    scanf("%d",&num);
    //check the number is odd or even
    if(num%2==0){
        printf("The given number is even\n");
    }else{
        printf("The given number is odd\n");
    }


    return 0;
}