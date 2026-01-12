//print all the even number 1 to 100
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
    }