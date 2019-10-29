#include<stdio.h>
int main()
{
    float a[100];
    int i,c=0;
    for(i=0;i<6;i++)
        {
            scanf("%f",&a[i]);
         if(a[i]>0)
              c++;}
    printf("%d valores positivos\n",c);
    return 0;
}
