#include<stdio.h>
int main()
{
    float a,b,c,d,e,m=0,fm=0;
    scanf("%f%f%f%f",&a,&b,&c,&d);
     m=((a*2)+(b*3)+(c*4)+(d*1))/10;
      printf("Media: %.1f\n",m);
       if(m>=7.0)
        printf("Aluno aprovado.\n");
       if(m>=5.0&&m<=6.9)
        {
            printf("Aluno em exame.\n");
         scanf("%f",&e);
         printf("Nota do exame: %.1f\n",e);
           fm=(m+e)/2;
           {
            if(fm>=5.0)
            printf("Aluno aprovado.\n");
          else
            printf("Aluno reprovado.\n");
           printf("Media final: %.1f\n",fm);}
        }
        if(m<4.9)
            printf("Aluno reprovado.\n");
        return 0;

}
