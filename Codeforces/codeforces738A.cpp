#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i,j,l=0,k,p=0,q=0;
    cin>>s;
    l=strlen(s);
    cout<<l;
    for(i=0;i<l;i=p)
    {
        if(s[i]!='o')
            {cout<<s[i];
             p++;
             cout<<p;}
        k=0;
         if(s[i]=='o')
        {
            for(j=i+1;j<l;j=j+2)
            {
                if(s[j]=='g'&&s[j+1]=='o')
                    k++;
                else
                    {p=j;
                     break;}
            }
            if(k>0)
            cout<<"***"<<p;
            else if(k==0)
                {cout<<s[i];
                  p++;
                  cout<<p;
                   break;
                  }


        }


    }


    }


