#include<stdio.h>
int main()
{
    int t,fc,c,f,n=0;
    float c2,c1,f1;
    //scanf("%d",&t);
    //while(t--!=0)
   // {
        //c2=0;//
        //fc=0;

        scanf("%d%d",&c,&f);
             c1=(float)c;
             printf("%.2f\n",c1);
             f1=(float)f;
             printf("%.2f\n",f1);
         c2=(((5*f1)/9)-32);
         printf("%.2f\n",c2);
         fc=(c1+c2);
         printf("%.2f\n",fc);
    //}
    return 0;
}
