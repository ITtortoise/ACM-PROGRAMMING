#include<bits/stdc++.h>
using namespace std;
#define sz 10000000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll n,i,j,k,t,m1=0,m2=0;
    vector<int>v1;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        stringstream ss(s);
        while(ss>>n)
            v1.push_back(n);
        //sort(v1.begin(),v1.end());
        for(i=0; i<v1.size()-1; i++)
        {
            m2=v1[i]*v1[i+1];
            if(m2>m1)
                m1=m2;
        }
        cout<<m1<<endl;
    }
}



