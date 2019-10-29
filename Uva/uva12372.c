#include<stdio.h>
int main()
{
    int t,l,w,h,c=0;
    scanf("%d",&t);
    while(t--!=0)
    {
        c++;
        scanf("%d%d%d",&l,&w,&h);
        if((l>0&&l<=20)&&(w>0&&w<=20)&&(h>0&&h<=20))
            printf("Case %d: good\n",c);
        else
            printf("Case %d: bad\n",c);
    }
    return 0;
}
