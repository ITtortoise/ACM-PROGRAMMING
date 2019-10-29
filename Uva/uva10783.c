#include<stdio.h>
int main()
{
    int t,a,b,c=0,i,sum;
    scanf("%d",&t);
    while(t--!=0)
    {
        sum=0;
        c++;
        scanf("%d%d",&a,&b);
        if(a==b)
            printf("Case %d: 0\n",c);
        else if(a>=0&&b>=0&&b>a)
        {
            for(i=a; i<=b; i++)
            {
                if(i%2!=0)
                    sum=sum+i;
            }
            printf("Case %d: %d\n",c,sum);
        }
    }
    return 0;
}
