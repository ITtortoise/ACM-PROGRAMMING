#include<stdio.h>
#include<math.h>
int main()
{
    double m,n,o;
    int a,b,x,c,d,e,f,g,h,i,j,k,l,A,B,C,D,E,F,G,H,I,J;
    scanf("%lf",&m);
    x=(int)(m*1);
    o=m-x;
    printf("NOTAS:\n");
     {
       a=x/100;
     b=x%100;
     c=b/50;
     d=b%50;
     e=d/20;
     f=d%20;
     g=f/10;
     h=f%10;
     i=h/5;
     j=h%5;
     k=j/2;
     l=j%2;

printf("%d nota(s) de R$ 100,00\n",a);
printf("%d nota(s) de R$ 50,00\n",c);
printf("%d nota(s) de R$ 20,00\n",e);
printf("%d nota(s) de R$ 10,00\n",g);
printf("%d nota(s) de R$ 5,00\n",i);
printf("%d nota(s) de R$ 2,00\n",k);

      A=(int)(o*100)/50;
      B=(int)(o*100)%50;
      C=B/25;
      D=B%25;
      E=D/10;
      F=D%10;
      G=F/5;
      H=F%5;

printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",l);
printf("%d moeda(s) de R$ 0.50\n",A);
printf("%d moeda(s) de R$ 0.25\n",C);
printf("%d moeda(s) de R$ 0.10\n",E);
printf("%d moeda(s) de R$ 0.05\n",G);
printf("%d moeda(s) de R$ 0.01\n",H);

}
return 0;

}


