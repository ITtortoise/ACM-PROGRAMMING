#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,d1,d2,d;
    scanf("%lf",&x1);
    scanf("%lf",&y1);
    scanf("%lf",&x2);
    scanf("%lf",&y2);
    d1=((x2)-(x1))*((x2)-(x1));
    d2=((y2)-(y1))*((y2)-(y1));
    d=sqrt(d1+d2);
    printf("%.4lf\n",d);
    return 0;
}
