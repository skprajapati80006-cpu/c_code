#include<stdio.h>
int main(){
float n;
printf("enter a number : ");
scanf("%d",&n);
    for(int i=100;i>n;i=i/2){
        printf("%d ",i);
    }
    return 0;
}