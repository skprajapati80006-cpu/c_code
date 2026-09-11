#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    printf("enter third number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greater");
    }
    if(b>c && b>a){
        printf("b is greater");
    }
    if(c>a && c>b){
        printf("c is greater");
    }
    return 0;
}