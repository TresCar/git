#include<stdio.h>
float square(int x){
    float ans = 0;
    while (ans*ans<x)
    {
        ans += 0.000001;
    }return ans;
}
int main(){
    float x;scanf("%f",&x);
    printf("%f",square(x));
    return 0;
}