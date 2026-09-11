#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",n);
    int a = 100;
    for(int i=100;i<=n;i=i-3){
        printf("%d ",&i);
        if(a>0){
            printf("%d ",&a);
        }
    }
    return 0;
}