#include<bits/stdc++.h>
#define sz 100000001
using namespace std;
typedef long long ll;

ll n,k,i,j,t,r,a,b,counter=1,res;

struct card
{
    ll top;
    ll bottom;

    card(ll t,ll b){
        top=t;
        bottom=b;
    }
    bool operator< (const card &d) const{
        if(bottom==d.bottom)
            return top>d.top;
        return bottom>d.bottom;
    }
};

int main()
{
    vector<card>v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(card(a,b));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size() && counter>0 ;i++){
        res+=v[i].top;
        counter+=v[i].bottom-1;
    }
    cout<<res<<endl;

}
