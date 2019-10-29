#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    int i,j,k,l,n,m;

    scanf("%d",&t);
    while(t--!=0)
    {
        char s1[500]={'\0'},s2[500]={'\0'};
        k=0;
        l=0;
        n=0;
        gets(s1);
        k=strlen(s1);
        for(i=0; i<k; i++)
        {
            if((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
                s1[i]=s1[i]+3;
        }
        for(i=k-1; i>=0; i--)
        {
            s2[n]=s1[i];
            n++;
        }

        l=k/2;
        for(m=l; m<k; m++)

        {
            s2[m]=s2[m]-1;
        }
        s2[m]='\0';
        puts(s2);
    }




    return 0;


}
