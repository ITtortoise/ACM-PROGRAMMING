#include<stdio.h>
int main()
{
    double A,B,C;
    {
        if(A>0&&B>0&&C>0)
    scanf("%lf%lf%lf",&A,&B,&C);
     if(A B + C)
        printf(" NAO FORMA TRIANGULO\n");
     else if((A*A)=(B*B)+(C*C));
     printf("TRIANGULO RETANGULO\n");
     else if((A*A)>(B*B)+(C*C))
        printf(" TRIANGULO OBTUSANGULO\n");
     else if((A*A)<(B*B)+(C*C))
        printf("TRIANGULO ACUTANGULO\n");
     else if(A==B==C)
     printf("TRIANGULO EQUILATERO\n");
     else if(A==B || B==C || C==A)
     printf("TRIANGULO ISOSCELES\n");}
     return 0;


}
