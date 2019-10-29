#include<stdio.h>
int main()
{
    int T,n=0;
    long long int a,b,c;
    scanf("%d",&T);
    while(T--!=0)
    {
        n++;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==b==c)
            printf("%lld\n",a);
        else if(b>a && c>b)
            printf("Case %d: %lld\n",n,b);
        else if(a>b && a<c)
            printf("Case %d: %lld\n",n,a);
        else if(c>a && c<b)
            printf("Case %d: %lld\n",n,c);
        else if(c>b && c<a)
            printf("Case %d: %lld\n",n,c);
        else if(a>b && b>c)
            printf("Case %d: %lld\n",n,b);
        else if(a>c && a<b)
            printf("Case %d: %lld\n",n,a);
        else if(a==b)
            printf("%lld\n",a);
        else if(b==c)
            printf("%lld\n",b);
        else if(c==a)
            printf("%lld\n",c);


    }
    return 0;

}
