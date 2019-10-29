#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0,l=0,rem;
    char s1[1000];
    gets(s1);
    l=strlen(s1);
    if(l<=4)
    {
        for(i=0; s1[i]!='\0'; i++)

        {
            if(s1[i]=='4'||s1[i]=='7')
                c++;
        }
        if(c==l)
            printf("yes");
        else
            printf("no");
    }






}
