#include <stdio.h>

int main()
{   
    int x,y,z;//个位，十位，百位
    int i;

    for(i=100;i<=999;i++){
        x=i%10;
        y=i/10%10;
        z=i/100%10;

        if(i==(x*x*x+y*y*y+z*z*z)){
            printf("%d is narcissistic number\n",i);
        }

    }

    return 0;
}