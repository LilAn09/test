#include <stdio.h>

int main()
{   
    int k;
    scanf("%d",&k);
    int day=0,total=0,n=1,cnt=0;

    while(day<k)
    {
        total+=n;
        day++;
        cnt++;
        if(cnt==n)
        {
            n++;
            cnt=0;
        }

  

    }


        printf("%d",total);


   return 0;
}