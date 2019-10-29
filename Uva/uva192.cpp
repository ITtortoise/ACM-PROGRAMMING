#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i,j,k,l,c=0,p,q;
    string s,s2="",s3="ay",s4,s5;

    getline(cin,s);
    l=s.size();
    //cout<<l;
    s.erase(s.begin()+(l-1));
    //cout<<s;
    s+=' ';
    for(i=0; i<l; i++)
    {
        if(s[i]==' ')
        {
            if(s2[0]=='A'||s2[0]=='E'||s2[0]=='I'||s2[0]=='O'||s2[0]=='U'||s2[0]=='a'||s2[0]=='e'||s2[0]=='i'||s2[0]=='o'||s2[0]=='u')
            {
                cout<<s2+s3;
                if(i<l-1)
                    cout<<" ";
            }
            else
            {
                s5=s2[0];
                s2.erase(s2.begin()+0);
                cout<<s2+s5+s3;
                if(i<l-1)
                    cout<<" ";
            }
            s2=s5="";

        }
        else
            s2+=s[i];
    }
    cout<<"."<<endl;



    return 0;


}

