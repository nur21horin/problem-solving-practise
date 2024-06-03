#include<stdio.h>
#include<string.h>
int main(){
    char name[200];int i,j;
    printf("Enter the value of string:");
    scanf("%[^\n]",name);
    int size=strlen(name);
    for(i=0;name[i]<'\0';i++){
        printf("%d\n",i);
    }
    printf("%d",i);
    return 0;
}