#include<stdio.h>
int main()
{
    int a,b,i,sum=0,j,sum1=0,temp=0,r;
    scanf("%d%d",&a,&b);
    if(a>0&&b<0)
    {
        {
            if(a%2!=0)
        {
            for(i=a-2;i>0;i=i-2)
                sum=sum+i;
        }
        else if(a%2==0)
        {
            for(j=a-1;i>0;i=i-2)
                sum1=sum1+i;
        }
          }
        {
            temp=(-1)*b;

               if(temp%2!=0)
        {
            for(i=temp-2;i>0;i=i-2)
                sum=sum+i;
        }
        else if(temp%2==0)
        {
            for(j=temp-1;i>0;i=i-2)
                sum1=sum1+i;
        }
           }
           r=sum=sum1;
           printf("%d",r);
}
}
