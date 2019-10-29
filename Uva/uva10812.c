#include<stdio.h>
int main()
{
   long long int t,a,b,ts,d;
    scanf("%lld",&t);
    while(t--!=0)
    {
        a=0;
        b=0;
        scanf("%lld%lld",&ts,&d);
        if(ts<0||d<0)
            break;
       else if(d>ts|| (ts-d)%2==1)
            printf("impossible\n");
        else
        {
            a=(ts+d)/2;
            b=(ts-d)/2;
            printf("%lld ",a);
            printf("%lld\n",b);
        }


    }
    return 0;
}
