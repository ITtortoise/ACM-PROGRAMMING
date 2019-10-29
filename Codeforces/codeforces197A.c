#include<stdio.h>
int main()
{
    float a,b,r,area1=0,area2=0;
    int w=0;
    scanf("%f%f%f",&a,&b,&r);
    area1=a*b;
    printf("%f\n",area1);
    area2=3.1416*r*r;
    printf("%f\n",area2);
    w=area1/area2;
    printf("%d\n",w);
    if(w%2!=0)
        printf("First");
    else
        printf("Second");


}
