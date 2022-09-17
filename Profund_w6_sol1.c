#include<stdio.h>
#include<string.h>
int main(){
    char x[100];scanf("%s", x);
    int i = strlen(x);
    while(i >= 0){
       printf("%c", x[i-1]);
       i--;
    }
    return 0;
}