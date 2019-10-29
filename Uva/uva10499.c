#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0)
            break;
        else if(n==1) printf("0%%\n");
        else
            printf("%lld%%\n",25*n);
    }

    return 0;
}
