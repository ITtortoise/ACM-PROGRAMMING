#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,r,m,n;
    char s1[1000]="vertebrado";
    char s2[1000]="ave";
    char s3[1000]="carnivoro";
    char s4[1000]="onivoro";
    char s5[1000]="mamifero";
    char s6[1000]="herbivoro";
    char s71[1000]="invertebrado";
    char s81[1000]="inseto";
    char s91[1000]="hematofago";
    char s111[1000]="anelideo";
    char s10[1000],s11[1000],s12[1000];
    gets(s10);
    gets(s11);
    gets(s12);
    i=strcmp(s1,s10);
    n=strcmp(s71,s10);
      if(i==0)
    {
        j=strcmp(s2,s11);
        m=strcmp(s5,s11);
        if(j==0)
        {
            k=strcmp(s3,s12);
            l=strcmp(s4,s12);
            if(k==0)
                printf("aguia\n");
            if(l==0)
                printf("pomba\n");

        }
        if(m==0)
        {
            k=strcmp(s4,s12);
            l=strcmp(s6,s12);
            if(k==0)
                printf("homen\n");
            if(l==0)
                printf("vaca\n");

        }

    }
    if(n==0)
    {
        j=strcmp(s81,s11);
        m=strcmp(s111,s11);
        if(j==0)
        {
            k=strcmp(s91,s12);
            l=strcmp(s6,s12);
            if(k==0)
                printf("pulga\n");
            if(l==0)
                printf("lagarta\n");

        }
        if(m==0)
        {
            k=strcmp(s91,s12);
            l=strcmp(s4,s12);
            if(k==0)
                printf("sanguessuga\n");
            if(l==0)
                printf("minhoca\n");

        }

     }
     return 0;
}
