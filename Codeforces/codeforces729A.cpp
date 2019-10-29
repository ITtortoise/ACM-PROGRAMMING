#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=0,m;
    char s[1000];
    cin>>n;
    cin>>s;
    int l=strlen(s);
    while(i<l)
    {
        if(s[i]!='o')
        {
            cout<<s[i];
            i++;
        }
        else if(s[i]=='o')
        {
            m=i;
            k=0;
            if(s[i+1]=='g'&&s[i+2]=='o')
            {
                k=1;
                for(i=i+1; i<l; i=i+2)
                {
                    if(s[i]=='g'&&s[i+1]=='o');
                    else
                    break;
                }
            }
            if(k==1)
                cout<<"***";
            else if(k==0)
                   {cout<<s[m];
                i++;}

        }
    }

}
