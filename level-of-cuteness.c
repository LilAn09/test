#include <stdio.h>

int main()
{   
    int n;

    scanf("%d",&n);

    int fish[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&fish[i]);
    }



    for(int m=0;m<n;m++)
    {       int cnt=0;
        for(int x=0;x<m;x++)
        {
            if(fish[m]>fish[x])
            {
                cnt++;
            }
        }

        printf("%d ",cnt);

    }




   return 0;
}