#include<stdio.h>
int main(){
    float x1 = 70; //physics
    float x2 = 60; //chemistry
    float x3 = 75; //bio
    float x4 = 76; //maths
    float x5 = 85; //english
    float marks =(x1+x2+x3+x4+x5);
    float percentage = marks * 100/500;
    printf("all subject marks is : %f",marks);
    printf("percentage is : %f",percentage);
    return 0;
}