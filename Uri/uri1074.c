#include<stdio.h>
int main()
{
    int N,n;
    scanf("%d",&N);
    while(N--!=0)
    {
        scanf("%d",&n);
        if(n==0)
         printf("NULL\n");
        if(n>0 && (n%2==0))
            printf("EVEN POSITIVE\n");
        if(n<0 && (n%2==0))
            printf("EVEN NEGATIVE\n");
        if(n>0 && (n%2!=0))
            printf("ODD POSITIVE\n");
        if(n<0 && (n%2!=0))
           printf("ODD NEGATIVE\n");
    }

}
