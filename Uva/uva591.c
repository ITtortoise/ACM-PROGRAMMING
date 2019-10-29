#include<stdio.h>
int main()
{
    int n,i,a[100],sum,b,m,c=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        c++;
        sum=0;
        b=0;
        m=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        m=sum/n;
        for(i=0; i<n; i++)
        {
            if(a[i]>m)
                b=b+(a[i]-m);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",c,b);

    }
    return 0;

}
