#include<bits/stdc++.h>
int main()
{
    int n,a[1000],i,sum=0,y;
    double d;
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
        sum=sum+a[i];
    }
    d=sum/4;
    y=ceill(d);
    printf("%d",y);

    return 0;

}
