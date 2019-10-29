#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int r,i,j;
    char s1[1000],s2[1000],s3[1000],s4[1000];
    gets(s1);
    gets(s2);
    for(i=0; s1[i]!='\0'; i++)
    {
        s3[i]=tolower(s1[i]);
    }
    s3[i]='\0';
    for(j=0; s2[j]!='\0'; j++)
    {
        s4[j]=tolower(s2[j]);
    }
    s4[i]='\0';
    r=strcmp(s3,s4);
    printf("%d",r);
    return 0;


}
