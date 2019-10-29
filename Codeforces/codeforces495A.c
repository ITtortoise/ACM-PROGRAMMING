#include<stdio.h>
#include<math.h>
int main()
{
    long long int x1,y1,x2,y2,x3,y3,x4,y4,d,p,q,r,s,t,w;
    scanf("%I64d %I64d %I64d %I64d",&x1,&y1,&x2,&y2);
    if(x1==x2){
        d=sqrt(pow((y1-y2),2));
        x3=x1+d;
        y3=y1;
        x4=x3;
        y4=y2;
        printf("%I64d %I64d %I64d %I64d", x3,y3,x4,y4);
    }
    else if(y1==y2){
        d=sqrt(pow((x1-x2),2));
        x3=x2;
        y3=y2+d;
        x4=x1;
        y4=y3;
        printf("%I64d %I64d %I64d %I64d", x3,y3,x4,y4);
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        p=x1+x2;
        q=x1-x2;
        w=x2-x1;
        r=y1+y2;
        s=y1-y2;
        t=y2-y1;
        x4=(p+t)/2;
        y4=(r+q)/2;
        x3=(p+s)/2;
        y3=(r+w)/2;
        printf("%I64d %I64d %I64d %I64d", x3,y3,x4,y4);
    }
    else
        printf("-1\n");

    return 0;
}
