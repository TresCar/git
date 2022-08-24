#include<stdio.h>
int main(){
    int x,sum = 0,i = 1;
    scanf("%d" , &x);
    while(x > 0 && x <20 && i <= x){
        sum += 30;
        i++;
    }
    while(x >= 20 && x < 50 && i <= x){
        sum += 25;
        i++;
    }
    while(x >= 50 && x < 80 && i <= x){
        sum += 20;
        i++;
    }
    while(x >= 80 && i <= x){
        sum += 15;
        i++;
    }
    printf("%d", sum);
}