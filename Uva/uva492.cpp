#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{

    string s;
    while(getline(cin,s))
    {
        int n,m,i,j,k,l,c=0,p=0,q;
        string s1,s2="ay",s3;
        char ch1,ch2;
        l=s.size();
        for(i=0; i<l; i++)
        {
            if(isalpha(s[i]))
                s1+=s[i];
            else if(!isalpha(s[i]))
            {
                if(s1.size()>0)
                {
                    if(s1[0]=='a'||s1[0]=='e'||s1[0]=='i'||s1[0]=='o'||s1[0]=='u'||s1[0]=='A'||s1[0]=='E'||s1[0]=='I'||s1[0]=='O'||s1[0]=='U')
                        cout<<s1+s2;
                    else
                    {
                        ch2=s1[0];
                        s1.erase(0,1);
                        cout<<s1<<ch2<<s2;
                    }
                    s1="";
                }
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;


}

