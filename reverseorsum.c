#include<stdio.h>
int main(){
    int n;
    printf("Enter a  number : ");
    scanf("%d",&n);
     int sum = 0;
    int lastdigit = 0;
    while(n!=0){
        lastdigit =n%10;
        sum = sum + lastdigit;
        n=n/10;
        int r = 0;
        // while(n!=0){
        //     r = r+(n%10);
        //     r = r * 10;
        //     n = n/10;
        //     printf("the reverse number is %d",r);
        // }
        printf("sum of all digit number is %d\n",sum);
    }
    return 0;
}