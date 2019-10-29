///"BISMILLAHIR RAHMANIR RAHIM....."
///"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
///submited by:SHOHAG(ICT,MBSTU).......
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second


#define  dbg    cout<<"welldone"
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",&value)
using namespace std;

int n,i,j;
//memset(a,0,sizeof(a));
string s,s2,m;
map<ll,ll>_mp,_mp2,_mp3;
map<ll,ll>::iterator it;
vector<ll>vec,vec2;
vector<ll>G[51];
set<ll>st;

string ch(string s)
{
    string m="";
    int c=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
            c=1;
        else if(c==1)
            m+=s[i];
    }
    return m;
}
int main()
{

    int n;
    scanf("%d",&n);
    stack<string>st;
    getchar();
    for(int p=1; p<=n; p++)
    {
        string s;
        getline(cin,s);
        if(s=="Kick")
        {
            if(!st.empty())
                st.pop();
        }
        else if(s=="Test")
        {
            if(!st.empty())
                cout<<st.top()<<endl;
            else
                printf("Not in a dream\n");
        }
        else
            st.push(ch(s));

    }

    // main();
}


