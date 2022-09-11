#include<stdio.h>

int main(){
    int x,i = 0;scanf("%d", &x);
    if(x<0){x = 0-x;}
    while (2*i < x)
    {
        i++;
    }
    if(2*i > x){printf("Odd");}
    else{printf("Even");} 
}