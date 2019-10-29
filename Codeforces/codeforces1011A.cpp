/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited by:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;


int main()
{
    ll n,m,k,i,d=1,j,t,f,r,l,c=0,t1,t2,t3,sum=0,temp,temp1,cnt=0,x,y,rem,mod,mx,mn;
    char a[sz];
    memset(a,0,sizeof(a));
    string str1,str2;
    map<char,ll>_mp;
    map<char,ll>::iterator it,it1;
    vector<ll>v,v1,v2,v3;
    vector<ll>vv[51];
    for(i=97; i<=121; i++)
    {
        _mp[i]=d;
        d++;
    }

    cin>>n>>k;
    cin>>str1;
    sort(all(str1));

    for(i=0; i<n; i++)
    {
        cout<<_mp[str1[i]]<<endl;
        int s=0;
        cnt=0;
        for(j=i; j<n; j++)
        {

            if(_mp[str1[j+1]]-_mp[str1[i]]>=2)
            {

                s=s+_mp[str1[j+1]]-_mp[str1[j]];
                cout<<_mp[str1[j+1]]<<' ';
                cnt++;
                if(cnt==k-1)
                {
                    cout<<endl<<' ';
                    break;
                }
            }
        }


    }



}

