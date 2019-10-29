#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a=0,m=2;
    scanf("%d",&n);
    if(n>5 && n<2000)
        {
            for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(i,m);
            printf("%d^%d = %d\n",i,m,a);
        }

    }
        }
    return 0;
}
