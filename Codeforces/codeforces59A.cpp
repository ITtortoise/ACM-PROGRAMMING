#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[1000],s1[1000];
    int i,j=0,u=0,l=0,r=0;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {r++;}
    for(i=0; s[i]!='\0'; i++)
    {if(s[i]>='A'&&s[i]<='Z')
         u++;
      else
        l++;
    }
    if(u>l)
    {
        for(i=0;i<r;i++)
            {s1[j]=toupper(s[i]);
            cout<<s1[j];
            j++;}
    }
   else if(l>=u)
    {
        for(i=0;i<r;i++)
            {s1[j]=tolower(s[i]);
            cout<<s1[j];
            j++;}
    }

}
