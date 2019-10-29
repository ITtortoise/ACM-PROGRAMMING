#include<stdio.h>
#include<ctype.h>
int main()
{
    int n,k;
    double t;
    scanf("%d",&n);
    t=(float)(n/5.00);
     k=ceill(t);
     printf("%d",k);
     return 0;
}
