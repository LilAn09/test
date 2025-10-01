#include <stdio.h>

int main()
{   
    int height[10];
    int cnt=0;
    int can=0;

    for(cnt;cnt<=9;cnt++)
    {
       scanf("%d", &height[cnt]);
    }

    int a;
    scanf("%d",&a);

    int max=a+30;

    for(cnt=0;cnt<=9;cnt++)
    {
        if(max>=height[cnt]){
            can++;
        }
    }


    printf("%d",can);



   return 0;
}