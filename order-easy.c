#include <stdio.h>

int main()
{   
    int x,y,z;

    scanf("%d %d %d",&x,&y,&z);

    int min,middle,max,sum;

    sum=x+y+z;

    min=(x<y?x:y)<z?(x<y?x:y):z;
    max=(x>y?x:y)>z?(x>y?x:y):z;
    middle=sum-min-max;

    printf("%d %d %d",min,middle,max);

    return 0;
}