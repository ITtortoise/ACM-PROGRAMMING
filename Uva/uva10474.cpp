#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll N,Q,c=0;

    while(cin>>N>>Q)
    {
        if(N==0&&Q==0)
            break;
        c++;
        ll n,m,i,j,k,l,p,q;
        vector<ll>v1,v2;
        for(i=0; i<N; i++)
        {
            cin>>n;
            v1.push_back(n);
        }
        sort(v1.begin(),v1.end());
        for(j=0; j<Q; j++)
        {
            cin>>q;
            v2.push_back(q);
        }
        vector<ll>::iterator it;
        cout<<"CASE# "<<c<<":"<<endl;
        for(j=0; j<Q; j++)
        {
            it=find(v1.begin(),v1.end(),v2[j]);
            if(it != v1.end())
                cout<<*it<<" found at "<<(it-v1.begin())+1<<endl;

            else
                cout<<v2[j]<<" not found"<<endl;
        }
    }
    return 0;
}

