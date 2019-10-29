#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,hd,md,m=24,gt,tm;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(((h1==0&&m1==0)&&(h2==0&&m2==0))||(h1==h2&&m1==m2))
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
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
        if(h1>h2)
        {
            gt=m-h1;
            tm=m1+m2;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gt,tm);}

}
