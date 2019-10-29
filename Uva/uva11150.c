#include<stdio.h>
int main()
{
    long long int n,r=0,rem=0,p=0,q=0;
    scanf("%lld",&n);

    rem=n%2;
    if(rem==0)
    {
         p=n*2;
        r=p-(n/2);
        printf("%lld",r);
    }
    else if(rem!=0)
    {
        q=n+1;
        p=n*2;
        r=p-(q/2);
        printf("%lld",r);
    }
    return 0;
}
