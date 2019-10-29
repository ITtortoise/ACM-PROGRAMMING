#include<stdio.h>
int main()
{

     double sal,incre,nsal,increment;

    scanf("%lf",&sal);
    if(sal>=0 && sal<=400.00)
      {
          incre=(sal*15)/100;
      nsal=sal+incre;
      printf("Novo salario: %.2lf\n",nsal);
      printf("Reajuste ganho: %.2lf\n",incre);
      printf("Em percentual: 15 %%");}

     if(sal>400.00 && sal<=800.00)
        {
            incre=(sal*12)/100;
          nsal=sal+incre;
           printf("Novo salario: %.2lf\n",nsal);
      printf("Reajuste ganho: %.2lf\n",incre);
      printf("Em percentual: 12 %%\n");}
      if(sal>800.00 && sal<=1200.00)
        {
                incre=(sal*10)/100;
          nsal=sal+incre;
           printf("Novo salario: %.2f\n",nsal);
      printf("Reajuste ganho: %.2f\n",incre);
      printf("Em percentual: 10 %%\n");}
       if(sal>1200.00 && sal<=2000.00)
        {
            incre=(sal*7)/100;
      nsal=sal+incre;
       printf("Novo salario: %.2lf\n",nsal);
      printf("Reajuste ganho: %.2lf\n",incre);
      printf("Em percentual: 7 %%\n");}
      if(sal>2000.00)
        {
            incre=(sal*4)/100;
      nsal=sal+incre;
       printf("Novo salario: %.2lf\n",nsal);
      printf("Reajuste ganho: %.2lf\n",incre);
      printf("Em percentual: 4 %%\n");}

      return 0;

}

