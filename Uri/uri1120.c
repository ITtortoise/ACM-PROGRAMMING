#include<stdio.h>
#include<string.h>
int main()
{
    int n,a[100],i,k=0;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
            k++;
        else
            printf("%d",a[i]);
    }
}
