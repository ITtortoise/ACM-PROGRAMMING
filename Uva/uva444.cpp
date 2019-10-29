#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 9999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int n,m,i,j,k,l,p,q;
        string s1,s2;
        stringstream c;
        l=s.size();
        if(s[0]>='0'&&s[0]<='9')
        {
            reverse(s.begin(),s.end());
            //cout<<s;
            for(j=0; j<l; j++)
            {
                n=0;
                if(s[j]=='1')
                {
                    s1+=s[j];
                    s1+=s[j+1];
                    s1+=s[j+2];
                    //reverse(s1.begin(),s1.end());
                    n=atoi(s1.c_str());
                    printf("%c",n);
                    j=j+2;
                    s1="";

                }
                else
                {
                    s1+=s[j];
                    s1+=s[j+1];
                    //reverse(s1.begin(),s1.end());
                    n=atoi(s1.c_str());
                    printf("%c",n);
                    j=j+1;
                    s1="";

                }
            }
            //cout<<endl;
        }

        else
            for(i=0; i<l; i++)
            {
                if(s[i]>=' '&&s[i]<='z')
                {
                    n=s[i] ;
                    c<<n;
                    s1=c.str();
                }
                reverse(s1.begin(),s1.end());


            }
            cout<<s1;

        s="";
        cout<<endl;

    }


    return 0;


}

