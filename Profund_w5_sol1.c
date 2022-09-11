#include<stdio.h>

int main(){
    int x;scanf("%d", &x);
    if(x<0){x = 0-x;}
    int n = x/2;
    if(x-2*n == 1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}