#include<stdio.h>
int main()
{
    int tsecond=0,houre=0,remsec1=0,minute=0,remsec2=0,a=0;
    scanf("%d",&tsecond);
    if(tsecond>=3600)
    {
        houre=tsecond/3600;
        printf("%d:",houre);
       remsec1=(tsecond-(houre*3600));
       if(remsec1>=60)
         {
             minute=remsec1/60;
        remsec2=(remsec1-(minute*60));
        printf("%d:%d\n",minute,remsec2);
                           }
       else
        printf("%d:%d\n",a,remsec1);
                                  }
        if(tsecond<3600)
        {
            printf("%d:",a);
            minute=tsecond/60;
            remsec1=(tsecond-(minute*60));
            printf("%d:%d\n",minute,remsec1);

        }
        return 0;

}
