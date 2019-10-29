#include<stdio.h>
int main()
{
        double t,s,x;
        int n1=0,n3=0;
        double n2=0,n4=0;
        scanf("%lf%lf%lf",&t,&s,&x);
        if(x==t)
           printf("YES\n");
        else if(t>x||s>x)
             printf("NO\n");
        else if(t<x)
        {
            n1=(x-t)/s;
            printf("%d\n",n1);
            n2=(x-t)/s;
            printf("%lf\n",n2);
            n3=(x-(t+1))/s;
            printf("%d\n",n3);
            n4=(x-(t+1))/s;
            printf("%lf\n",n4);
            if(n2-n1==0||n3-n4==0)
               printf("YES\n");
            else
                 printf("NO\n");
        }

    return 0;
}
