#include<stdio.h>
int main()
{
    int t=0;
    double a,b,c,m=0;
    scanf("%d",&t);
    while(t--!=0)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
     m=((a*2)+(b*3)+(c*5))/10;
     printf("%.1lf\n",m);}
     return 0;
}
