#include <stdio.h>
#include <math.h>

int IsPrimeNumber(int m){
    
    int i=0;
    int k=(int)sqrt((double)m);
    for(i=2;i<=k;i++){
        if(m%i==0){
            break;
        }
    }

    if(i>k){
        return 1;
        //printf("%d is prime number\n",m);
    }else{
        return 0;
        //printf("%d is not prime number\n",m);
    }
}

int main()
{   
    int IsPrimeNumber(int m);

    int j=0;

    for(j=101;j<=200;j++){
        if(IsPrimeNumber(j)){
            printf("%d ",j);
        }
    }

    return 0;
}