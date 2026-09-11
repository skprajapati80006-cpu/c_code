#include<stdio.h>
int main(){
    int n;
    int m;
    printf("Number  of Row : ");
    scanf("%d",&n);
    printf("Enter of coolume : ");
    scanf("%d",&m);
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i  ||  j+i==6)
            printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}