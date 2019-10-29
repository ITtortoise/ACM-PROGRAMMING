#include<stdio.h>
int main()
{

    int n,q;
    double r;
    scanf("%d %d",&n,&q);
      switch(n)
       {
       case 1:
          {r=(4.00*q);
          printf("%Total: R$ %.2lf\n",r);
          break;}
          case 2:
          {r=4.50*q;
          printf("%Total: R$ %.2lf\n",r);
          break;}
          case 3:
         {
            r=5.00*q;
          printf("%Total: R$ %.2lf\n",r);
          break;
         }
          case 4:
         {
          r=2.00*q;
         printf("%Total: R$ %.2lf\n",r);
          break;
         }
           case 5:
         {
          r=1.50*q;
         printf("%Total: R$ %.2lf\n",r);
          break;
       }
}
}
