#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll T,t;
    cin>>T;
    getchar();
    for(t=1; t<=T; t++)
    {
        ll n,m,i,j,k,l,c=0,p,q,w=0;
        string s1,s2,s3,s4;
        getline(cin,s1);
        getline(cin,s2);
        k=s1.size();
        l=s2.size();
        for(p=0; p<s1.size(); p++)
            if(!isspace(s1[p]))
                s3+=s1[p];
        for(q=0; q<s2.size(); q++)
            if(!isspace(s2[q]))
                s4+=s2[q];

        for(i=0; i<l; i++)
        {
            if(s1[i]!=s2[i]&&s1[i]!=' '&&s2[i]!=' ')
            {
                w=1;
                break;
            }
            if(s1[i]==s2[i])
                c++;
        }

        if(c==l&&c==k)
            cout<<"Case "<<t<<": Yes"<<endl;

        else if(k!=l&&s3==s4)
            cout<<"Case "<<t<<": Output Format Error"<<endl;
        else
            cout<<"Case "<<t<<": Wrong Answer"<<endl;


        s1=s2="";
    }
    return 0;
}

