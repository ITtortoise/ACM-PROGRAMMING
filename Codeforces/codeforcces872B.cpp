#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    ll n,i,j,k,v,x,y;
    vector<int>v1,v2;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>v;
        v1.push_back(v);
    }
    v2=v1;
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    if(k==1)
        cout<<v2[n-1];
    else if(k==2)
    {
        cout<<max(v1[0],v1[n-1]);
    }
    else
    {
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(v2[i]==v1[j])
                {
                    x=v1.size()-(j+1);
                    y=(j+1)-1;
                    if(x+y>=k-1)
                    {
                        cout<<v1[j]<<endl;
                        return 0;
                    }
                }

    }

}
