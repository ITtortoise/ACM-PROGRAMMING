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

        ll n,i,j,k,m,P=0,N=0;
        char ch;
        vector<char>v1,v2;
        cin>>n;
        m=n*2;
        //cout<<m;
        for(i=0; i<m/2; i++)
        {
            cin>>ch;
            v1.push_back(ch);
        }
        for(j=0; j<m/2; j++)
        {
            cin>>ch;
            v2.push_back(ch);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(i=0; i<m/2; i++)
        {
            if(v1[i]-v2[i]>0)
                P++;
            else if(v1[i]-v2[i]<0)
                N++;
        }
        if(P==m/2||N==m/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;




}
