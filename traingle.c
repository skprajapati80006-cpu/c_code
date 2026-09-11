#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first side : ");
    scanf("%d",&a);
    printf("enter scecond side : ");
    scanf("%d",&b);
    printf("enter third side : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("vailed triangle");
    }
    else{
        printf("invailed triangle");
    }
    return 0;
}