#include<stdio.h>
#include<math.h>
int isPrime(int x){
    if(x<=1)
        return 1;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
            return 1;
    }
    return 0;
}
int main(){
    int x;scanf("%d", &x);
    while ((isPrime(x))){scanf("%d", &x);}
    printf("prime = %d",x);
    return 0;
}