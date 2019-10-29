#include<stdio.h>
#include<math.h>
int main()
{

    float m;
    long long int n,p,a,c,i;

    while(1)
    {
        c=0;
        scanf("%lld%lld",&p,&n);
        if((p<=0||n<=0)||(p==n))
        {
            break;
        }
        else if((p<n)&&(n<=100000))
        {

            for(i=p; i<=n; i++)
            {
                m=sqrt(i);
                a=m;
                if(m-a==0)
                    c++;
            }
            printf("%lld\n",c);
        }

    }
    return 0;

}

