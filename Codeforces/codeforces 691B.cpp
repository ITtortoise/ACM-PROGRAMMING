/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

int n,m,k,i,j,t,f,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4,s5;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    //os3="BCDEFGJKLNPQRSZacefghjklmnrstuyz";
    s5="BCDEFGJKLNPQRSZabdpqcefghjklmnrstuyz";
    cin>>s;
    if(s.size()==1)
    {
        c=s5.find(s[0]);
        if(c==-1)
            cout<<"TAK"<<endl;
         else
           cout<<"NIE"<<endl;

        return 0;
    }
    for(i=0; i<s.size()/2; i++)
        s1+=s[i];
    if(s.size()%2!=0)
    {
        for(i=s.size()-1; i>s.size()/2; i--)
            s2+=s[i];
    }
    else
    {
        for(i=s.size()-1; i>=s.size()/2; i--)
            s2+=s[i];
    }
    //reverse(all(s2));
    s4=s1+s2;
    //cout<<s1<<' '<<s2<<endl;
    for(i=0; i<s.size(); i++)
    {
        c=s5.find(s[i]);
        //cout<<c<<' '<<endl;
        if(c>=0)
        {
            cout<<"NIE";
            return 0;
        }
    }
    for(i=0; i<s1.size(); i++)
    {
        if(s1[i]!=s2[i])
        {
            if((s1[i]=='b'&&s2[i]=='d')||(s1[i]=='p'&&s2[i]=='q')||(s1[i]=='d'&&s2[i]=='b')||(s1[i]=='q'&&s2[i]=='p'))
                continue;
            else
            {
                cout<<"NIE";
                return 0;
            }
        }
    }
    cout<<"TAK";


    return 0;
}

