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

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mn,arr[MAX],test,res,val1,val2;
char ch;
string str,str2;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
set<ll>st;
stack<ll>stk,stk3;
stack<char>stk2;
/************************************ Code Start Here ******************************************************/
int main()
{
    getline(cin,str);
    for(i=0; str[i]; i++)
    {
        if(isspace(str[i])&&str2.size()>0)
        {
            v=atoi(str2.c_str());
            stk.push(v);
            str2.clear();

        }

        if(str[i]!=32&&str[i]!='+'&&str[i]!='-'&&str[i]!='*')
        {
            str2+=str[i];
        }
        else if(str[i]=='+'||str[i]=='-'||str[i]=='*')
        {
            stk2.push(str[i]);
            ch=stk2.top();
            stk2.pop();
            val1=stk.top();
            stk.pop();
            val2=stk.top();
            stk.pop();
            if(ch=='+')
            {
                res=val2+val1;
                stk.push(res);
            }
            else if(ch=='-')
            {
                res=val2-val1;
                stk.push(res);
            }
            else if(ch=='*')
            {
                res=val2*val1;
                stk.push(res);
            }


        }
    }
    cout<<res<<endl;




    return 0;

}

