#include<stdio.h>
#include<ctype.h>
int main()
{
    float s,t,m,n,a,r=0;
    scanf("%f%f%f",&m,&n,&a);
    s=ceill(m/a);
    t=ceill(n/a);
    r=s*t;
    printf("%.f%",r);

}
