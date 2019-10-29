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
#define  dbg    cout<<"welldone";
#define  all(x)   x.begin(),x.end()
//#define for(i,n) for(i=0;i<n;i++)
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",&value)
using namespace std;

ll n,m,k,i,d,j,tc,t,f,r,l,c,s,s1,t1,t2,t3,sum,temp,temp1,cnt,x,y,a[10000],rem,mod,mx,mn,n2,sum2,rem2;
//memset(a,0,sizeof(a));
string str1,str2;
map<ll,ll>_mp,_mp2,_mp3;
map<ll,ll>::iterator it;
vector<ll>v,v1,v2,v3;
vector<ll>G[51];
set<ll>st;

int main()
{
    cin>>tc;
    while(tc--)
    {
        for(i=0; i<4; i++)
        {
            cin>>n;
            f=0;
            //sum=0,sum2=0;
            while(n>0)
            {

                rem=n%10;
                n/=10;
                //cout<<rem<<endl;
                if(f==0)
                {
                    sum+=rem;
                    f=1;
                    //cout<<sum<<endl;
                }

                else if(f==1)
                {
                    //sum2=0;
                    n2=rem*2;
                    //cout<<n2<<endl;
                    while(n2>0)
                    {
                        rem2=n2%10;
                        sum2+=rem2;
                        n2/=10;

                    }

                    f=0;
                }

                //cout<<f<<' '<<n<<' '<<rem<<' '<<n<<' '<<sum<<endl<<f<<' '<<n2<<' '<<rem2<<' '<<n2<<' '<<sum2<<' '<<' '<<' ';

            }
            //cout<<sum<<' '<<sum2<<endl;


        }
        sum+=sum2;
        if(sum%10==0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;

            sum=0,sum2=0;

    }




    // main();


}

