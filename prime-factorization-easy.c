#include <stdio.h>

int main(){
    int m;
    int i;

    scanf("%d",&m);

    printf("%d=",m);

    for(i=2;i<=m;i++){
        while (!(m%i))
        {   
            if(i==m){
                printf("%d",i);
            }else{
            printf("%d",i);                
            }
            m=m/i;
            printf("*");
        }
        
    }
    printf("\b ");
    return 0;
}