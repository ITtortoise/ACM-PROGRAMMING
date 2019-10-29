/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define  pi    acos(-1.0)
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define MAX 100005
#define MIN -1
#define INF 1000000000
#define dbg cout<<"Executed"<<endl;
#define SET(array_name,value) memset(array_name,value,sizeof(array_name))
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,v2,r,l,row,extra,mx,mn,a,b,c,ab,ac,abc,bc,x,y;
string s;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{
    ll L,N;
    string s1,s2;
    map<string, string> M;

    cin>>L>>N;

    for(int i=0;i<L;i++){
        cin>>s1>>s2;
        M[s1]=s2;
    }

    char c1,c2;

    for(int i=0;i<N;i++){
        cin>>s1;
        if(M[s1]!="") cout<<M[s1]<<endl;
        else{
            c1=s1[s1.size()-1];
            c2=s1[s1.size()-2];

            if(c1=='y'&&(c2!='a'&&c2!='e'&&c2!='i'&&c2!='o'&&c2!='u')){
                s1.erase(s1.size()-1,1);
                cout<<s1<<"ies"<<endl;
            }else if(c1=='o'||c1=='s'||c1=='x'||(c1=='h'&&(c2=='c'||c2=='s'))) cout<<s1<<"es"<<endl;
            else cout<<s1<<"s"<<endl;
        }
    }


return 0;
}
