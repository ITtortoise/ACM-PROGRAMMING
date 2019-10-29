#include<stdio.h>
int main()
{
    int i,l,temp,j;
    char s[1000],s2[1000];
    gets(s);
    l=strlen(s);
    for(i=0; i<l; i=i+2)
    {
        for(j=i+2; j<l; j=j+2)
        {

            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;

            }
        }
        if(i<l-1)
            printf("%c+",s[i]);
        else
            printf("%c",s[i]);
    }
       return 0;
}

