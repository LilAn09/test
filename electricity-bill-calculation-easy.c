#include <stdio.h>

int main()
{   
    int t;

    scanf("%d",&t);

    double money;

    if (t>400)
    {
        money=(t-400)*0.5663+250*0.4663+150*0.4463;
    }
    else if(t>150)
    {
        money=(t-150)*0.4663+150*0.4463;
    }
    else
    {
        money=t*0.4463;
    }
    
    printf("%.1lf",money);


    return 0;
}