#include <stdio.h>

int main()
{   
    int a=1,b=1;

    for(int i=1;i<=10;i++){
        a=a+b;
        b=b+a;
        printf("%d,%d,",a,b);
    }

    return 0;
}