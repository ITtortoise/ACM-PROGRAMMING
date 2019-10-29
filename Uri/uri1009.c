#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    double salary,sale,bonus,total;
    gets(n);
    scanf("%lf %lf",&salary,&sale);
    bonus=(15*sale)/100;
    total=salary+bonus;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;

}
