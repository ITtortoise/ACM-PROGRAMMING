#include<stdio.h>
int main()
{
    int t1,t2,f,a,c1,c2,c3,sum,t,m,c,n;
    scanf("%d",&t);
    while(t--!=0)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
        sum=0;m=0;c=0;n=0;
        c++;
          if(c1>c3&&c2>c3)
        {
            n=c1+c2/2;
            sum=t1+t2+f+a+n;
        }
        else if(c2>c1&&c3>c1)
        {
            n=c2+c3/2;
            sum=t1+t2+f+a+n;
        }
        else if(c3>c2&&c1>c2)
        {
            n=c3+c1/2;
            sum=t1+t2+f+a+n;
        }
        else if((c1==c2)&&(c1>c3&&c2>c3))
        {
            n=c1+c2;
            sum=t1+t2+f+a+n;
        }
        else if((c2==c3)&&(c2>c1&&c3>c1))
        {
            n=c2+c3/2;
              sum=t1+t2+f+a;
        }
        else if((c3==c1)&&(c3>c2&&c1>c2))
        {
            n=c3+c1/2;
            sum=t1+t2+f+a+n;
        }
        else if((c2==c3)&&(c2<c1&&c3<c1))
        {
            n=c1+c2/2;
            sum=t1+t2+f+a+n;
        }
        else if((c3==c1)&&(c3<c2&&c1<c2))
        {
            n=c2+c3/2;
            sum=t1+t2+f+a+n;
        }
        else if((c1==c2)&&(c1<c3&&c2<c3))
        {
            n=c3+c1/2;
            sum=t1+t2+f+a+n;
        }
        else if(c1==c2&&c2==c3)
        {
            n=c1+c2/2;
            sum= sum=t1+t2+f+a+n;
        }
        m=sum;
        printf("%d\n",sum);
        if(m>=90)
            printf("Case %d: A\n",c);
        else if(m>=80&&m<90)
            printf("Case %d: B\n",c);
        else if(m>=70&&m<80)
            printf("Case %d: C\n",c);
        else if(m>=60&&m<70)
            printf("Case %d: D\n",c);
        else
            printf("Case %d: F\n",c);
    }
    return 0;


}
