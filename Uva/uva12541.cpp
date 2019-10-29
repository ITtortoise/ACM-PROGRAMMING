#include<bits/stdc++.h>
using namespace std;
vector<tuple<int,int,string> >vec;
tuple<int,int,string>t;
long long n,i,j,k,y,m,d;
string s;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>d>>m>>y;
        d=d+(m*30);
        t=make_tuple(y,d,s);
        vec.push_back(t);
    }
    sort(vce.begin(),vec.end());
    //for(i=0;i<n;i++)
    cout<<get<0>(vec[n-1])<<' '<<get<1>(vec[n-1])<<' '<<get<2>(vec[n-1])<<endl;
}
