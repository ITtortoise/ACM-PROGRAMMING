#include<stdio.h>
int main()
{
    int i,j=1,l,x,y,n,q,w;
    float t,sum=0,k=0,f,a[100];
    scanf("%d%d%d",&n,&x,&y);
    if(n==2)
    {
        scanf("%d%d",&q,&w);
        if(q>=x&&q<=y&&w>=x&&w<=y)
        {
            printf("1");
            goto en;
        }
        else

        {
            printf("0");
            goto en;
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            {
                sum=sum+(a[i]*j);
                 k=k+a[i];
                j++;

            }

        }

        t=(sum/k);
        f=ceill(t);
        printf("%f\n%f\n%f\n%.f",sum,k,t,f);
    }
en:
    return 0;
}
