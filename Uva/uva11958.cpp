#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 10000001
long long a[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll t,T;
    cin>>T;
    for(t=1; t<=T; t++)
    {
        ll N,h,m,tm,h1,m1,e,i,tm1,min,time;
        char ch1,ch2;
        min=1e7;
        cin>>N;
        cin>>h>>ch1>>m;
        tm=(h*60)+m;
        for(i=0; i<N; i++)
        {
            cin>>h1>>ch2>>m1>>e;
            if(h1<h)
                time=(((24-h)+h1)*60)-m+m1+e;
            else if(h<h1)
            {
                tm1=(h1*60)+m1+e;
                time=tm1-tm;
            }
            //cout<<time<<endl;
            if(time<min&&time>0)
                min=time;

        }
        cout<<"Case "<<t<<": "<<min<<endl;
    }

    return 0;
}

