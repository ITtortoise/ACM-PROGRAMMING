#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        ll n,m,i,j,k,l,c=0,p,q,amt[sz];
        string s2="",s1="";
        getline(cin,s1);
        getline(cin,s2);
        if(s1.size()!=s2.size())
            cout<<"No"<<endl;
        else
        {
            for(i=0; i<s1.size(); i++)
            {
                if((s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')&&(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'))
                    c++;
                else if(s1[i]==s2[i])
                    c++;
            }


            if(c==s1.size())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}






