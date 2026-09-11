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
        printf("greater than ram");
    }
    if(shyam > ajay && shyam > ram){
        printf("greater than shyam");
    }
    if(ajay > ram && ajay > shyam){
        printf("greater than ajay");
    }
    return 0;
}
