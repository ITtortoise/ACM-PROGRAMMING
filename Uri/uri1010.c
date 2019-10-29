#include<stdio.h>
int main()
{
    int code1,unite1,code2,unite2;
    double  price1,price2,cost1,cost2,cost;
    scanf("%d %d %lf\n%d %d %lf",&code1,&unite1,&price1,&code2,&unite2,&price2);
    cost1=unite1*price1;
    cost2=unite2*price2;
    cost=cost1+cost2;
   printf("VALOR A PAGAR: R$ %.2lf",cost);
   return 0;

}
