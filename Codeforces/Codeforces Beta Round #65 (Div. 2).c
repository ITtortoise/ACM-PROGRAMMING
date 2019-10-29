#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,t,m;
    char s[100];
    scanf("%d",&t);
    getchar();
    for(m=0; m<t; m++)
    {
        l=0;
        gets(s);
        l=strlen(s);
        if(l<=10)
        {
            puts(s);
        }
         else
        {
            for(i=0; i<l; i++)
            {
                if(i==0)
                    printf("%c%d",s[i],l-2);
                if(i==l-1)
                    printf("%c",s[i]);

            }
            printf("\n");
        }
    }
    return 0;
}

