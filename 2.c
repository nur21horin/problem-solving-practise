#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of the number: ");
    scanf("%d",&num);
    int is_prime=0;//assuming the number is prime

    //check the condition whether the number is prime or not
    for(int i=2;i<num;i++){
        if(num%i == 0){
            is_prime= 1;
            break;
        }}
    if(is_prime){
            printf("%d is a prime number.\n",num);
        
    }else{
            printf("%d is a  not prime number.\n",num);
    }

    
    return 0;
}