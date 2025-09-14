#include <stdio.h>

int main()
{   
	
	int s,v,t;
	
	int total=8*60;
	
	int hour,min;
	
	scanf("%d %d",&s,&v);
	
	t=(s+v-1)/v+10;
	
	int m=total-t;
	
	if(m>=0){
		hour=m/60;
		min=m%60;
	}
	else{m=24*60+total-t;
		hour=m/60;
		min=m%60;
	}
		if(hour<10){
			printf("0");
		}
		printf("%d:",hour);
		if(min<10){
			printf("0");}
		printf("%d",min);
   
   
      	
   return 0;
}