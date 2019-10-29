#include<stdio.h>
int main()
{
    int n,a[100],i,ans=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            ans=a[i]-a[j];
           if(ans<0)
              ans=(-1)*ans;

    }
 printf("%d\n",ans);
}
}
