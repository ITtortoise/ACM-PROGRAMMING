#include<stdio.h>
int main()
{
    int tdays,year,remdays1,remdays2,months,days,a=0;
    scanf("%d",&tdays);
    if(tdays>364)
    {
        year=tdays/365;
        printf("%d ano(s)\n",year);
        remdays1=tdays-(year*365);
        if(remdays1>29)
        {
            months=remdays1/30;
            printf("%d mes(es)\n",months);
            remdays2=remdays1-(months*30);
            printf("%d dia(s)\n",remdays2);
        }
         else
           {
               printf("%d mes(es)\n",a);
         printf("%d dia(s)\n",remdays1);}
    }
    if(tdays<364 && tdays>29)
     {
       printf("%d ano(s)\n",a);
         months=tdays/30;
    printf("%d mes(es)\n",months);
    remdays1=tdays-(months*30);
    printf("%d dia(s)\n",remdays1);}
   if (tdays<30)
       {
           printf("%d ano(s)\n",a);
        printf("%d mes(es)\n",a);
        printf("%d dia(s)\n",tdays);}
        return 0;
}
