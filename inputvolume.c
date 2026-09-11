#include<stdio.h>
int main(){
    float radius;
    printf("enter radius : ");
    scanf("%f",&radius);
    float pi = 3.14;
    float volume = (4/3)*radius*radius*radius*pi;
    printf("volume of spare is : %f",volume);
    return 0;
}