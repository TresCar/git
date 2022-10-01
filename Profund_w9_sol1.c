#include<stdio.h>
int main(){
    float x;scanf("%f",&x);
    float temp,sqrt;
    sqrt = x;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (temp+x/temp)/2;
    }
    printf("%f",sqrt);
    return 0;
}