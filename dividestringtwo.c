#include<stdio.h>
int main(){
    char str[200];
    scanf("%s",str);
    int i;
    for(i=0;str[i]!='\0';i++){
      
    }
    int midlength=i/2;
    char first[245];
    char second[300];
    for(int j=0;j<midlength;j++){
        first[j]=str[j];
    }
    first[midlength]='\0';
    printf("%s\n",first);
    for(int j=midlength;j<i;j++){
        second[j-midlength]=str[j];
    }
    second[i-midlength]='\0';
    printf("%s",second);

    return 0;
}