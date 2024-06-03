#include<stdio.h>
    struct employee{
        char name[30];
        int id;
        char department[50];
    };
    int main(){
    struct employee e[5];
    int i;
    for(i=0;i<5;i++){
       printf("\nEnter name,id,department %d:\n",i+1);
        scanf("%s %d %s",&e[i].name,&e[i].id,&e[i].department);
    }
    for(i=0;i<5;i++){
        printf("Name:%s ID:%d DEPARTMENT:%s\n",e[i].name,e[i].id,e[i].department);
    }
    return 0;

}