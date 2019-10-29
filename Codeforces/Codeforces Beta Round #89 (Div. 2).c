#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,l,j=0;
    char s[1000],s2[1000],s3[1000];

    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        s2[i]=tolower(s[i]);
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'||s2[i]=='y')
        {
            continue;
        }
        else
        {
            s3[j]=s2[i];
            printf(".%c",s3[j]);
            j++;
        }

    }
     return 0;

}
