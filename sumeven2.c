#include<stdio.h>
int main(){
    int number,digit,even_sum = 0;
    printf("Enter a number : ");
    scanf("%d",&number);
    number = abs(number);
    while(number > 0 ){
        digit = number % 10;
        if(digit % 2 == 0){
            even_sum += digit;
        }
        number = number / 10;
    }
    printf("The sum of all even digits is: %d\n",even_sum);
    return 0;
}