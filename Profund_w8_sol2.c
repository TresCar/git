#include<stdio.h>
int main(){
    int x,num;scanf("%d", &x);
    int a[3];
    do{
        a[2] = x%10;x=x/10;a[1] = x%10;x=x/10;a[0]=x;
        num = a[0]*a[1]*a[2];
        printf("%d.%d.%d = %d\n",a[0],a[1],a[2],num);
        if(num>9)
            x = num;
    }while(num>9);
    return 0;
}