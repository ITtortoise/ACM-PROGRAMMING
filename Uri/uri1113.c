#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    while(1)
    {
      scanf("%d%d",&a,&b);

    if(a<=0||b<=0)
      {break;}
    else
        {
        if(a>b)
            {

             for(i=b;i<=a;i++)
                    {printf("%d ",i);
                    sum=sum+i;}
            printf("Sum=%d\n",sum);}

        }
    }
    return 0;
}
