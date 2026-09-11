#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int evensum = 0;
int lastdigit = 0;
while(n%2==0){
    lastdigit = n%10;
    evensum = evensum + lastdigit;
    n=n/10;
}
printf("The sum of digit is %d",evensum);
    return 0;
}