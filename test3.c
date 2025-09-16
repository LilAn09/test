#include <stdio.h>

int main()
{   
   int a,b,c,d,e,f;
   
   scanf("%d %d %d %d",&a,&b,&c,&d);

   int start,end;
   
   start=a*60+b;

   end=c*60+d;

   int time;

   time=end-start;

   int hour,min;

   hour=time/60;

   min=time%60;

   printf("%d %d",hour,min);
	
   return 0;
}