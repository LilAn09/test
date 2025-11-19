#include <stdio.h>

int main(){
    int a=0;
    printf("Enter a single-digit number:");
    scanf("%d",&a);

    int n=1;
    int t=a;//利用中间变量保存t
    int sum=a;

    while(n<=4){
        a *= 10;
        a += t;
        sum+=a;
        n++;
    }

    printf("sum=%d\n",sum);

    return 0;
}