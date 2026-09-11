#include<stdio.h>
int main(){
    int x;
    int y;
    printf("enter the coodinates : ");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x==0  &&  y==0){
        printf("the point is origin");
    }
    else if(x==0){
        printf("the lies on x-axis");
    }
    else if(y==0){
        printf("the lies on y-axis");
    }
    return 0;
}