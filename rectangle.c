#include<stdio.h>
int main(){
    int l;
    int b;
    printf("enter the length : ");
    scanf("%d",&l);
    printf("enter the breadth : ");
    scanf("%d",&b);
    int a = l * b;
    int p = 2*(l + b);
    if(a>p){
        printf("area of rectangle is greater than parimeter");
    
    }
    else{
        printf("area is not greater than perimeter");
    }
    return 0;
}