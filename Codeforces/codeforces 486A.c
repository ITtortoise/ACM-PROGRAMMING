#include<stdio.h>
int main()
{
    long long int n,i,sum=0,sum1=0,r=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            sum=sum+i;
        else
            sum1=sum1+i;
    }

    r=sum-sum1;
    printf("%lld\n",r);
    return 0;
}
