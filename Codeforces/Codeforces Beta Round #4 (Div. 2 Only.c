#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--!=0)
    {
        scanf("%d",&n);
        if(n==2)
            printf("NO\n");
        else if(n%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
