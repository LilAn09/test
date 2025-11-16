#include <stdio.h>

int pow_n_k(int n,int k){
    if(k==0){
        return 1;
    }else{
        return n * pow_n_k(n,k-1);
    }
}

int main(){

    int n=0,k=0;

    printf("Please enter two positive integers:");

    scanf("%d %d",&n,&k);

    printf("%d",pow_n_k(n,k));

    return 0;
}