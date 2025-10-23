#include <stdio.h>

int main()
{   
    int g,s,b;
    
    int cnt=0;

    for(b=1;b<5;b++){
        for(s=1;s<5;s++){
            for(g=1;g<5;g++){
            if(g!=s && g!=b && s!=b){
                printf("%d\n",b*100+s*10+g);
                cnt++;
                }
            }   
        }
    }
    printf("cnt=%d\n",cnt);
   return 0;
}