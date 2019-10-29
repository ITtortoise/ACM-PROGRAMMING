#include<stdio.h>
int main()
{
    long int m,n;


    while(scanf("%ld%ld",&m,&n)!=EOF)
    {   if((m<1||m>300)||(n<1||n>300))
         break;
        printf("%ld\n",(m*n-1));
    }
    return 0;

}
