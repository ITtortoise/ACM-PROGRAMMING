#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i=0,j,l,k;
    cin>>s;
    l=strlen(s);
    while(i<l)
    {

        if(s[i]!='/')
        {
            cout<<s[i];
            i++;
        }
        else if(s[i]=='/')
        {

            for(j=i; j<l; j++)
            {
                if(s[j]=='/')
                    i++;
                else
                {
                    i++;
                    break;
                }

            }
            cout<<i;
            cout<<s[i];



        }


    }

    return 0;
}




