#include<stdio.h>
float square(int x){
    float temp,sqrt;
        sqrt = x;
        while (sqrt != temp)
        {
            temp = sqrt;
            sqrt = (temp+x/temp)/2;
        }
        return sqrt;
}
int main(){
    float x;scanf("%f",&x);
    printf("%f",square(x));
    return 0;
}