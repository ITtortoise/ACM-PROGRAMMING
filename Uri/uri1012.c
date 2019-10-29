#include<stdio.h>
int main()
{
    double A,B,C,R1,R2,R3,R4,R5,R6,pai=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    R1=(1/2.0)*(A*C);
    R2=pai*C*C;
    R3=((1/2.0)*C)*(A+B);
    R4=B*B;
    R5=A*B;
    printf("TRIANGULO: %.3lf\n",R1);
    printf("CIRCULO: %.3lf\n",R2);
    printf("TRAPEZIO: %.3lf\n",R3);
    printf("QUADRADO: %.3lf\n",R4);
    printf("RETANGULO: %.3lf\n",R5);
    return 0;

}
