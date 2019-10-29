#include<stdio.h>
int main()
{
    double t,sum,c;
    long long int n,i;
    double persent,m;
    scanf("%lf",&t);
    while(t--!=0)
    {
        m=0;
        sum=0;
        c=0;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
        m=sum/n;
        //printf("%.3lf\n",m);
        for(i=0; i<n; i++)
        {
            if(a[i]>m)
                c++;
        }
        persent=(c*100.000)/n;
        printf("%.3lf%%\n",persent);
    }
    return 0;

}
