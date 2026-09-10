#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",n);
    if(n%3==0 || n%5==0){
        if(n%15!=0);
        printf(" the numbe is divisibe by 5 or 3 but not 15");
    }
    else{
        printf("the number is divisible by 15");
    }
    else{
    	printf("the number is not divisibe by 3 or 5");
	}
    return 0;
} 
