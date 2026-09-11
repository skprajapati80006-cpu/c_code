#include<stdio.h>
int main(){
    int x1;
    int x2;
    int x3;
    int y1;
    int y2;
    int y3;
    printf("enter x1 : ");
    scanf("%d",&x1);
    printf("enter x2 : ");
    scanf("%d",&x2);
    printf("enter x3 : ");
    scanf("%d",&x3);
    printf("enter y1 : ");
    scanf("%d",&y1);
    printf("enter y2 : ");
    scanf("%d",&y2);
    printf("enter y3 : ");
    scanf("%d",&y3);
    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x1);
    if(m1=m2){
        printf("they line are straight line");
    }
    else{
        printf("they line are not straight line");
    }
    return 0;
}