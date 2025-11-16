#include <stdio.h>

int LCM(int a,int b){
   int i=0;
   for(i=1;i<=a*b;i++){
    if(i%a==0 && i%b==0){
        break;
    }
   }
   return i;
}

int main(){

    int a=0,b=0;

    printf("Please enter two integers:");

    scanf("%d %d",&a,&b);

    printf("%d",LCM(a,b));

    return 0;
}