#include<stdio.h>
int main()
{
    float sal,tax=0;
    scanf("%f",&sal);
    if(sal>0 && sal<=2000.00)
        printf("Isento\n");
    if(sal>2000.00 && sal<=3000.00)
        {tax=((sal-2000.00)*8)/100;
       printf("R$ %.2f\n",tax);}
       if(sal>3000.00 && sal<=4500.00)
          {tax=80.00+(((sal-3000)*18)/100);
               printf("R$ %.2f\n",tax);}
        if(sal>4500.00)
        {
            tax=350.00+(((sal-4500.00)*28)/100);
        printf("R$ %.2f\n",tax);
        }
        return 0;

}


