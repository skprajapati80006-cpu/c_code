#include<stdio.h>
int main(){
int a,b,c;
printf("Enter first numbers : ");
scanf("%d",&a);
printf("Enter second numbers : ");
scanf("%d",&b);
printf("Enter third numbers : ");
scanf("%d",&c);
if(a>b){
    if(a>c){
        printf("%d is the gratest number",a);
    }
    else{
        printf("%d is the gratest number",c);
    }
}
if(b>a){
    if(b>c){
        printf("%d is the gratest number",b);
    }
    else{
        printf("%d is the gratest number",c);
    }
}
if(c>a){
    if(c>b){
        printf("%d is the gratest number",c);
    }
    else{
        printf("%d is the gratest number",b);
    }
}
return 0;
}

