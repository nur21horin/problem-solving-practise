#include<stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    int max;
    switch(1){
        case 1:
        max=(num1>num2 && num1>num3)?num1:0;
        break;
        case 2:
        max=(num2>num1 && num2>num3)?num2:0;
        break;
        max=(num3>num1&&num3>num2)?num3:0;
        break;
        default:
        printf("Invalid case.\n");
        return 1;
    }
    if(max!=0){
        printf("%d is greater.\n");
    }else{
        printf("All numbers are equal.\n");
    }
    return 0;
}