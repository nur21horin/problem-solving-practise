#include<stdio.h>
#include<string.h>

int main(){
    char c[200];
    scanf("%[^\n]",&c);
    int i;
    //function for size
    i=strlen(c);
    int j,k;
    char d;
    for(j=0,k=i-1;j<=k;j++,k--){
        char d=c[j];
        c[j]=c[k];
        c[k]=d;
    }
    printf("reverse:%s",c);

}