/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,sum,cnt,a[10000],b,d,rem,mod,mx=0,mn,v,r,l;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        ll temp1=a[i];
        ll temp2=temp1;
        cnt=1;
        //cout<<temp1<<' ';
        for(j=i+1; j<n; j++)
        {
            //cout<<a[j]<<' ';
            if(a[j]<=temp1)
            {
                cnt++;
                temp1=a[j];
                //cout<<a[j]<<' ';


            }
            else
            {
                break;
            }
        }
        /*cout<<cnt<<' ';
        cnt=0;*/
        for(k=i-1; k>=0; k--)
        {


            if(a[k]<=temp2)
            {
                cnt++;
                temp2=a[k];
               // cout<<a[k]<<' ';

            }
            else
            {
                break;
            }
        }
        //cout<<cnt<<endl;
        mx=max(mx,cnt);
        temp1=0;
        temp2=0;
        cnt=0;


    }
    cout<<mx<<endl;


}

