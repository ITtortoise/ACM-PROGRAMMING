#include<stdio.h>
int main()
{
    long long int s,n,m;

    while(1)
    {
        s=2;
        scanf("%lld",&m);
        if(m<0)
        {
            break;
        }
        else if(m==0)
            printf("1\n");

        else if(m>0)
        {
            for(n=2; n<=m; n++)
            {
                s=s+n;
            }
            printf("%lld\n",s);
        }



    }
    return 0;
}
