#include <stdio.h>

int main()
{  
   int student;

   int type1,type2,type3;

   int price1,price2,price3;

    scanf("%d", &student);
    scanf("%d %d", &type1, &price1);
    scanf("%d %d", &type2, &price2);
    scanf("%d %d", &type3, &price3);

   int money1,money2,money3;
   
   money1=((student+type1-1)/type1)*price1;
   money2=((student+type2-1)/type2)*price2;
   money3=((student+type3-1)/type3)*price3;

   if(money1<=money2 && money1<=money3)
   {
    printf("%d",money1);
   }
    else if(money2<=money1 && money2<=money3)
   {
    printf("%d",money2);
   }
   else
   {
    printf("%d",money3);
   }
   return 0;
}