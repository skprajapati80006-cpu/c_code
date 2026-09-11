#include<stdio.h>
int main(){
    int n;
    int a;
    int b;
    printf("Enter a rows : ");
    scanf("%d",&a);
    printf("Enter b colume : ");
    scanf("%d",&b);
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=b;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}