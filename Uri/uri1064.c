#include<stdio.h>
int main()
{
    float a[100],sum=0,aver=0;
    int i,c=0;
    for(i=0;i<6;i++)
          {
            scanf("%f",&a[i]);
          {
              if(a[i]>0)
          {    c++;
              sum=sum+a[i];}
                              }
                                  }
           aver=sum/c;
           printf("%d valores positivos\n",c);
          printf("%.1f\n",aver);
 return 0;
}
