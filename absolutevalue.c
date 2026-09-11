#include<stdio.h>
int main(){
int n;
printf("enter a number : ");
scanf("%d",&n);
if(n<0){ // if n is negative
   n = n * (-1);
    printf("the absolute volue is : %d", n);
}
else{
    printf("the absolute volue is not");
}
    return 0;
}