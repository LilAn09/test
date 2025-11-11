#include <stdio.h>

int main(){

    int n=0,i=0,j=0,m=0;
    int cnt=0;
    scanf("%d",&n);

    int number[n];
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++){//首先固定一个“和”值
        for(j=0;j<n;j++){//固定一个加数
            for(m=0;m<n;m++){//去找被加数
                if(i!=j&&i!=m&&j!=m){
                    if((number[i]==number[j]+number[m])&&number[j]!=number[m]){
                    cnt++;
                    goto next_i;/*这里采用goto语句是想避免重复计数。源代码中
                                若number[i] = number[j] + number[m]，存在另一组 j' 和 m'（即两者交换数值） 
                                也满足 number[i] = number[j'] + number[m']，
                                cnt 会被多次累加，导致结果偏大。*/
                    }
                }
            }
        }
        next_i:;
    }

    printf("%d",cnt);

    return 0;
}