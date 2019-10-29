#include<stdio.h>
int main()
{
    int a,b,m=24,gt,g1,g2;
    scanf("%d %d",&a,&b);
    if(a>b)
        {
            g1=m-a;
        gt=g1+b;
        printf("O JOGO DUROU %d HORA(S)\n",gt);}
     if(a<b)
        {
            gt=b-a;
           printf("O JOGO DUROU %d HORA(S)\n",gt);}
        if((a==0 && b==0 )|| a==b)
             printf("O JOGO DUROU 24 HORA(S)\n");


}
