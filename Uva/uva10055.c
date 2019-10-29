#include<stdio.h>
int main()
{
    long long int  H,O,D;

        while(scanf("%lld %lld",&H,&O)!=EOF)
    {   D=0;
        if(H<=O)
        {
            D=O-H;
    printf("%lld\n",D);}
     else if(H>O)
        {
            D=H-O;
     printf("%lld\n",D);}
        }
        return 0;
}
