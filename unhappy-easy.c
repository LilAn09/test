#include <stdio.h>

int main()
{   
 	int x[7],y[7],z[7];

    int i;

    for(i=0;i<=6;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
        z[i]=x[i]+y[i];

    }
    int max,day=0;
    max=z[0];
    for(i=0;i<=5;i++)
    {
        if(z[i+1]>max)
        {
            max=z[i+1];
            day=i+2;
        }
    }
    if(max>8)
    {
        printf("%d",day);
    }
    else
    {
        printf("0");
    }

   return 0;
}