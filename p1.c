#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number \n");
    scanf("%d",&n);
    for( i = 1;i<=n;i++){
        for (int j = 1;j<=n;j++){
            if(j <= i){
            printf("*");
            }        
        else{
            printf(" ");
        }
        }
    printf("\n");}
    return 0;
}