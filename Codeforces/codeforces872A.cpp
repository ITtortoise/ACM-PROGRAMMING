#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

int main ()
{

    vector<int> v1,v2,v(10000);
    vector<int>::iterator it;
    int n,m,c,i,j,x=0,y=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v1.push_back(c);
    }
    for(j=0; j<m; j++)
    {
        cin>>c;
        v2.push_back(c);
    }

    sort (v1.begin(),v1.end());
    sort (v2.begin(),v2.end());

    it=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    v.resize(it-v.begin());

    for (it=v.begin(); it!=v.end();it++)
    {
        x=*it;
        break;
    }
    y=(min(v1[0],v2[0])*10)+(max(v1[0],v2[0]));
    if(x>0)
        cout<<min(x,y);
    else
        cout<<y;
    return 0;
}

