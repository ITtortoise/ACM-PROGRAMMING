#include<stdio.h>
int main()
{
    int t;
    long long int a,b;
    scanf("%d",&t);
    while(t--!=0)
    {

        scanf("%lld%lld",&a,&b);
        if(a>=1000000001 || b>=1000000001)
        {
            break;
        }
        if(a>b)
            printf(">\n");
        else if(b>a)
            printf("<\n");
        else if(a==b)
            printf("=\n");
    }
    return 0;
}
