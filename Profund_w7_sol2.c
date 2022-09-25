#include<stdio.h>
#include<math.h>

int main(){
    int x,count = 1;scanf("%d", &x);
    while(count){
    count = 0;
    if(x<=1){
        count++;
        scanf("%d", &x);
    }
    else{
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            scanf("%d", &x);
            count++;
            break;
        }
    }}}
    printf("prime = %d", x);
    return 0;
}