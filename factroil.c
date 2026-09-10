#include<stdio.h>
int main(){
    int n, sum=0, product=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        product *= i;
    }
    printf("The factorial is: %d\n", product);
    return 0;
}