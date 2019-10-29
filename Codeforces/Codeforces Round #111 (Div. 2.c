#include<stdio.h>
int main()
{
    int n,i,j,a[100],temp,sum=0,r=0,c=0,s=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    for(i=1; i<=n; i++)
    {
        s=s+a[n-i];
        r=sum-s;
        if(r<s)
        {
            printf("%d\n ",i);
            goto e;
        }
    }
e:
    return 0;

}
