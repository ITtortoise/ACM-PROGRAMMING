#include<stdio.h>
int main()
{
    int a[100],i,p=0,n=0,o=0,e=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
           p++;
        if(a[i]<0)
           n++;
        if(a[i]%2==0)
            o++;
        if(a[i]%2!=0)
            e++;
    }
    printf("%d valor(es) par(es)\n",o);
    printf("%d valor(es) impar(es)\n",e);
     printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
    return 0;
}
