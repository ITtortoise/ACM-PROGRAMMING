#include<stdio.h>
int main()
{
    int t,f,l,a,e,p,tp,i,sum;
    scanf("%d",&t);
    while(t--!=0)
    {
        p=0;
        sum=0;
        scanf("%d",&f);
        for(i=0; i<f; i++)
        {
            scanf("%d%d%d",&l,&a,&e);
            p=(l*e);
            sum=sum+p;
        }
        printf("%d\n",sum);
    }
    return 0;


}
