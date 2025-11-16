#include <stdio.h>

int max(int a,int b){
    int maximum;

    maximum=(a>=b)?a:b;

    return maximum;
}

int main(){

    int a=0,b=0;

    printf("Please enter two integers:");

    scanf("%d %d",&a,&b);

    printf("%d",max(a,b));

    return 0;
}