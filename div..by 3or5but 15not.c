#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%5==0  ||  n%3==0){
        if(n%3!=15 || n%5!=0);
        printf("divisible by 5 or 3");
    }
    else{
        printf("not divisible by 3 or 5");
    }
    return 0;
}
