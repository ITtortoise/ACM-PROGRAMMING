#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,hd,md,m=24,gt,tm,k=0,n=0;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h1<=24 && h2<=24 && m1<=60 && m2<=60)
     {
         if(((h1==0&&m1==0)&&(h2==0&&m2==0))||(h1==h2&&m1==m2))
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        if((h2==h1) && (m2>m1))
       {
           hd=h2-h1;
        md=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hd,md);}
         if((h2==h1) && (m1>m2))
       {
           hd=23;
          k=m1-m2;
          md=60-k;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hd,md);}
    if((h2>h1) && (m2>m1))
       {
           hd=h2-h1;
        md=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hd,md);}

        if((h2>h1)&&(m2<m1))
        {
            m2=m2+60;
            h2=h2-1;
              hd=h2-h1;
        md=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hd,md);}
        if(h1>h2 && m2>m1)
        {
            n=m-h1;
            hd=n+h2;
            md=m2-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hd,md);}
            if(h1>h2 && m1>m2)
        {
            n=m-h1;
            hd=(h2-1)+n;
            k=m1-m2;
            md=60-k;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hd,md);}
                                                                         }
            return 0;


}

