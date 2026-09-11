#include<stdio.h>
int main(){
    int n;
    printf("enter a numbe : ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        if(n%15!=0);
        printf(" the numbe is divisibe by 5 or 3 but not 15");
    }
    else{
        printf("the number is divisible by 15");
    }
    return 0;
}