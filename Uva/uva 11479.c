#include<stdio.h>
int main()
{
    long long int a,b,c,n=0,t;
    scanf("%lld",&t);
    if(t>0&&t<20)
    {
        while(t--!=0)
        {

            n++;
            scanf("%lld%lld%lld",&a,&b,&c);
            if(a+b<=c||b+c<=a||c+a<=b)
                printf("Case %lld: Invalid\n",n);
            else if((a+b>c&&b+c>a&&c+a>b)&&(a==b&&b==c&&c==a))
                printf("Case %lld: Equilateral\n",n);
            else if((a+b>c&&b+c>a&&c+a>b)&&(a==b||b==c||c==a))
                printf("Case %lld: Isosceles\n",n);
            else if(a+b>c&&b+c>a&&c+a>b)
                printf("Case %lld: Scalene\n",n);

        }
    }
    return 0;
}
