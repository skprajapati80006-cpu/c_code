#include<stdio.h>
int main(){
    int n;
    printf("enter positive number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("yes,is divisible by 5 and 3");
    }
    else{
        printf("no,it is not divisible by 5 and 3");
    }
    return 0;
}