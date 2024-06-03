#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    int i;
    scanf("%[^\n]",&a);
    int size=strlen(a);
    for(i=0;i<size/2;i++){
        printf("%s",a[i]);

    }
    return 0;
}