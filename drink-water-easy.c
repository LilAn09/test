#include <stdio.h>

int main()
{   int h,r;

    double water;
    
    scanf("%d %d",&h,&r);
    
    water=3.14*r*r*h;
    
    int n;
    
    n=(20000+water-1)/water;

    printf("%d",n);

    return 0;
}
