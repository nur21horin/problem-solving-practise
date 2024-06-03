#include<stdio.h>
#include<string.h>
int is_palindrome(const char* str){
     int length=strlen(str);
     for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            return 0;//Not pallindrome
            }
    }
 return 1;
}
int main(){
    char str[200];
    printf("Enter the string:");
    scanf("%[^\n]",&str);
    int length=strlen(str);
   if(is_palindrome(str)){
    printf("%s is a palindrome\n.");
   }else{
    printf("%s is not a pallindrome\n");
   }
    return 0;
}