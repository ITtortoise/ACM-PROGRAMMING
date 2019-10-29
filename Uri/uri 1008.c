#include<stdio.h>
int main()
{
    int d,h;
    float ph,sal;
    scanf("%d %d",&d,&h);
    scanf("%f",&ph);
    sal=h*ph;
    printf("NUMBER = %d\n",d);
    printf("SALARY = U$ %.2f\n",sal);
    return 0;

}
