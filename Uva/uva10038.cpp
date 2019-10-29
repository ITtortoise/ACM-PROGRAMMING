#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k,l,c,p,q,amt[sz],d1,d2,d3,d4;
    string s;
    vector<ll>v,v1;
    while(getline(cin,s))
    {
        stringstream ss;
        ss<<s;
        while(ss>>n)
            v.push_back(n);
        sort(v.begin(),v.end());
        int m=0;
        m=v[v.size()-1];
        k=0;
        for(i=0; i<v.size()-2; i++)
        {
            d1=abs(v[i]-v[i+1]);
            //cout<<d1<<" "<<d2<<endl;
            if(d1<m&&d1>0)
                continue;
            else
            {
                k=1;
                break;
            }
        }
        if(v.size()==2)
            k=0;
        if(k==0)
            cout<<"Jolly"<<endl;
        else if(k==1)
            cout<<"Not jolly"<<endl;
        v.clear();
    }

    return 0;
}

