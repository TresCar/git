#include<stdio.h>
int main(){
    float x;scanf("%f",&x);
    float ans = 0;
    while (ans*ans<x)
    {
        ans += 0.000001;
    }
    printf("%f",ans);
    return 0;
}