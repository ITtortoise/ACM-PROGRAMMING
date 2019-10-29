#include<stdio.h>
int main()
{
    float a,b,c,Perimetro =0,Area =0;
    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c && b<c+a && c<a+b)
        {
            Perimetro =a+b+c;
        printf("Perimetro = %.1f\n",Perimetro);}
     else
            {Area = (0.5)*(a+b)*c;
     printf("Area = %.1f\n",Area);}

}
