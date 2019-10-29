#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll n,i,j,k,ma=0,m,c=0,mi=0,v,p;
    vector<int>a,b,d;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>v;
        a.push_back(v);

    }
    b=a;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=0; i<m; i++)
        for(k=a[i]; k>0; k--)
        {
            //cout<<k<<" ";
            d.push_back(k);
        }
    sort(d.begin(),d.end());
    /*for(i=0; i<d.size(); i++)
        cout<<d[i]<<" ";*/
    reverse(d.begin(),d.end());

    for(i=0; i<n; i++)
    {

        ma=ma+d[i];

    }
    cout<<ma<<" ";
    c=0;
    for(i=0; i<n; i++)
    {
        for(j=b[i]; j>0; j--)
        {
            mi=mi+j;
            c++;
            if(c==n)
            {
                cout<<mi<<endl;
                return 0;
            }

        }


    }



}

