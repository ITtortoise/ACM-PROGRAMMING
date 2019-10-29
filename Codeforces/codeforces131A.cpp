#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000],s1[1000];
    int i,j=1,k,u=0,l=0,q=0,F,G=0;
    cin>>s;


    for(i=0; s[i]!='\0'; i++)
    {
        q++;
    }
    if(q==1)
    {if(s[0]>='A'&&s[0]<='Z')
        cout<<(s1[0]=tolower(s[0]));
    else
        {cout<<(s1[0]=toupper(s[0]));}
        goto en;}


    if(s[0]>='A'&&s[0]<='Z')
    {
        for(i=1; s[i]!='\0'; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                u++;
            else
                l++;
        }
        if(l+1==q)
        {
            cout<<s[0];
            for(i=1; i<q; i++)
            {
                s1[j]=tolower(s[i]);
                cout<<s1[j];
                j++;
            }


        }
        else if(u+1==q)
        {
            s1[0]=tolower(s[0]);
            cout<<s1[0];
            for(i=1; i<q; i++)
            {
                s1[j]=tolower(s[i]);
                cout<<s1[j];
                j++;
            }
        }
        else
            cout<<s;
    }

    else if(s[0]>='a'&&s[0]<='z')
    {
        for(i=1; s[i]!='\0'; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                u++;
            else
                l++;
        }
        if(l+1==q)
        {

            cout<<s;
            //goto en;
        }
        else if(u+1==q)
        {
            s1[0]=toupper(s[0]);
            cout<<s1[0];
            for(i=1; i<q; i++)
            {
                s1[j]=tolower(s[i]);
                cout<<s1[j];
                j++;
            }
        }
        else
            cout<<s;
    }

en:
    return 0;
}


