#include<bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define sz 1000001
#define EPS 1e-9
#define PI acos(-1.0)
#define MOD 1e9 + 7

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define all(x) x.begin(),x.end()

typedef long long ll;
typedef pair<ll,ll> pii;
typedef pair<char,ll> pci;
typedef pair<string,ll> psi;

vector<ll>v[sz];
set<ll>st;

int main()
{

    ll n,x,i,j,k;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>x;
        v[x].pb(i);
        st.insert(x);

    }

    vector<pii>res;

    for(auto i:st){

        if(v[i].size()==1)
            res.pb(mk(i,0));

        else{
            map<ll,ll>cnt;

            for(j=1; j<v[i].size();j++){
                cnt[fabs(v[i][j]-v[i][j-1])]++;
            }

            if(cnt.size()==1)
               res.pb(mk(i,v[i][1]-v[i][0]));

        }

    }

    cout<<res.size()<<endl;

    for(auto i:res){
        cout<<i.F<<' '<<i.S<<endl;
    }


    return 0;

}
