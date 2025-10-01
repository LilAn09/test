#include <stdio.h>

int main()
{   
 	int x,n,cnt=0;

    int currentday;

    for(int i=0;i<n;i++)
    {
        currentday=(x+i-1)%7+1;
        if(currentday!=6&&currentday!=7)
        {
            cnt++;
        }
    }

    printf("%d",cnt*250);

   return 0;
}