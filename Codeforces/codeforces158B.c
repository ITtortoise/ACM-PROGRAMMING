#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i,y;
    float sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf ("%.lf", ceil(sum/4));


    return 0;

}
