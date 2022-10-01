#include<stdio.h>
int main(){
    int x,num = 1;scanf("%d", &x);
    int a[3];
    while(x > 10){
        a[0] = x/100;a[1]=(x-a[0]*100)/10;a[2]=(x-a[0]*100-a[1]*10);
        num *= a[0]*a[1]*a[2];
        printf("%d.%d.%d = %d\n",a[0],a[1],a[2],num);
        if(num>9){
            x = num;
            num = 1;
        }
        else
            x = num;
    }
    return 0;
}