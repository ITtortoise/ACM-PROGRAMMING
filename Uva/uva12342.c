#include<stdio.h>
int main()
{
    long double sal,tax,m,ttax;
    long long int t,n=0;
    scanf("%lld",&t);
    while(t--!=0)
    {
        n++;
        m=0;
        sal=0;
        tax=0;
        ttax=0;
        scanf("%lld",&sal);
        {
        if(sal>0 && sal<=180000)
        {
            ttax=0;

        }
        else if(sal>180000 && sal<=480000)
        {
            m=sal-180000;
                ttax=(m*10)/100;

        }
         if(sal>480000 && sal<=880000)
        {
            m=sal-480000;
            printf("%lld\n",m);
            tax=(m*15)/100;
            printf("%lld\n",tax);
            ttax=30000+tax;

        }
        else if(sal>880000 && sal<=1180000)
        {
            m=sal-880000;
            tax=(m*20)/100;
            ttax=30000+60000+tax;

        }
        else if(sal>1180000)
        {
            m=sal-1180000;
            tax=(m*25)/100;
            ttax=30000+60000+tax;

        }
        }
        if(ttax<20000)
            printf("Case %lld: 2000\n",n);
        else
            printf("Case %lld: %lld\n",n,ttax);
    }

    return 0;
}



