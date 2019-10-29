#include<stdio.h>
int main()
{
    long long int y;
    while(scanf("%lld",&y)!=EOF)
    {
        if(y==0)
        {
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
            printf("This is bulukulu festival year.\n");
        }

        else if(((y%4==0&&y%100!=0)||(y%400==0))&&(y%15==0))
        {
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
        }
        else if(((y%4==0&&y%100!=0)||(y%400==0))&&(y%55==0))
        {
            printf("This is leap year.\n");
            printf("This is bulukulu festival year.\n");
        }
        else if((y%4==0&&y%100!=0)||(y%400==0))
        {
            printf("This is leap year.\n");
        }
        else if(y%15==0)
        {
            printf("This is huluculu festival year.\n");
        }
        else if(y%55==0)
        {
            printf("This is buluculu festival year.\n");
        }
        else
            printf("This is an ordinary year.\n");

    }

    return 0;

}
