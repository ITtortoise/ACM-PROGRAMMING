#include<stdio.h>
int main()
{
    int time,avg,kml=12,F;
    double fuel;
    scanf("%d %d",&time,&avg);
    F=time*avg;
    fuel=(double)F/12;
    printf("%.3lf\n",fuel);
    return 0;
}
