#include<stdio.h>
int main()
{
    int m,n,sum=0,i;


    while(scanf("%d%d",&m,&n)!=0)
    {
        if(m==0 || n==0)
        {
            break;
        }

        else if(m>n)
        {
            for(i=n; i<=m; i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }
        else if(m<n)
        {
            for(i=m; i<=n; i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }

    }


return 0;
}
