/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()

using namespace std;

ll n,m,k,i,d,j,t,f,r,l,c,sum=1,cnt,x,y,a[10000000],rem,mod,mx,mn;
string str,strr;
map<char,ll>_mp;
map<char,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1;
vector<ll>vv[51];
set<ll>st;
bool consonant(char ch)
{
    if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='n')
        return true;
    else
        return false;
}
bool  check_vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
    else
        return false;
}
int main()
{
    cin>>str;

    for(i=0; i<str.size(); i++)
    {
        if(consonant(str[i])&&check_vowel(str[i+1]))
            continue;
        else if(consonant(str[i])&&!check_vowel(str[i+1]))
        {
            cout<<"NO"<<endl;
            goto mn;
        }


    }
    cout<<"YES"<<endl;
mn:
    str.clear();

    //main();


}

