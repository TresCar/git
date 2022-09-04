#include<stdio.h>
int factorial(int x){
    int sum = 1;
    while(x>1){
        sum *= x;
        x--;
    }
    return sum;
}
int main(){
    int x;
    scanf("%d", &x);
    printf("%d", factorial(x));
}