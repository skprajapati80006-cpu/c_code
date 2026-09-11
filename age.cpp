#include <stdio.h>
int main(){
    int ram;
    int shyam;
    int ajay;
    printf("enter ram age : ");
    scanf("%d",&ram);
    printf("enter shyam age : ");
    scanf("%d",&shyam);
    printf("enter ajay age : ");
    scanf("%d",&ajay);
    if(ram > shyam && ram > ajay){
        printf("ram is greater then shyam and ajay");
    }
    if(shyam > ajay && shyam > ram){
        printf("shyam is grater than ram and ajay");
    }
    if(ajay > ram && ajay > shyam){
        printf("ajay is greater than ram and shyam");
    }
    return 0;
}