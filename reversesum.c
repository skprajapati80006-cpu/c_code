#include<stdio.h>
int main(){
int n;
int r;
printf("Enter a number : ");
scanf("%d",&n);
int sum = 0;
int r = 0;
int lastdigit = 0;
while(n!=0){
    lastdigit = n%10;
    sum = sum + lastdigit;
    n=n/10;
}
printf("The sum of digit is %d",sum);
while(n!=0){
    r = r + (n%10);
    r = r * 10;
    n = n/10;
}
printf("The given number reverse is %d",r);
    return 0;
}