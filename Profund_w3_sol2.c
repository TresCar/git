#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    x < 20 ? printf("%d", 30*x) : x < 50 ? printf("%d", 25*x) : x < 80 ? printf("%d", 20*x) : printf("%d", 15*x); 
}