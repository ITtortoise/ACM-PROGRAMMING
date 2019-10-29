#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
      {
          if(a==0&&b==0&&c==0)
            printf("%d\n%d\n%d\n",a,b,c);
          if(a<b && a<c && b<c)
        printf("%d\n%d\n%d\n",a,b,c);
      if(a<b && a<c && b>c)
        printf("%d\n%d\n%d\n",a,c,b);
      if(b<a && b<c && a<c)
        printf("%d\n%d\n%d\n",b,a,c);
        if(b<a && b<c && a>c)
        printf("%d\n%d\n%d\n",b,c,a);
      if(c<b && c<a && b<a)
        printf("%d\n%d\n%d\n",c,b,a);
      if(c<b && c<a && b>a)
        printf("%d\n%d\n%d\n",c,a,b);}
        printf("\n");
       printf("%d\n%d\n%d\n",a,b,c);
        return 0;

}
