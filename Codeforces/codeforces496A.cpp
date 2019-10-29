#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector <int> v,uv;
    int n,x,i,j,maxi=0,d,l,m,t[123456];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    uv=v;

    for(l=1,m=0; l<v.size()-1; l++,m++)
    {
        v.erase(v.begin()+l);

        for(i=0; i<v.size()-1; i++)
        {
            d=v[i+1]-v[i];
            if(d>maxi)
                maxi=d;
        }
        v=uv;
        t[m]=maxi;
        maxi=0;
    }
    sort(t,t+(v.size()-2));
    cout<<t[0]<<endl;

    return 0;
}
