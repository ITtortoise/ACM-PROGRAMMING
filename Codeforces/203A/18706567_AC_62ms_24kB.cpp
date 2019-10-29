#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,k,x,t,m1,m2,c1,c2,s,cnt2,cnt1;
vector<long long >v2,v1;
int main()
{
    cin>>x>>t>>m1>>m2>>c1>>c2;
    while(m1>0&&cnt1<t)
    {
        v1.push_back(m1);
        m1-=c1;
        cnt1++;
    }
    while(m2>0&&cnt2<t)
    {
        v2.push_back(m2);
        m2-=c2;
        cnt2++;
    }
    v1.push_back(0);
    v2.push_back(0);

    if(v1.size()>=v2.size())
    {
        for(i=0; i<v1.size(); i++)
        {
            for(j=0; j<v2.size(); j++)
            {
                if(v1[i]+v2[j]==x)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }

            }
        }
    }
    else
    {
        for(i=0; i<v2.size(); i++)
        {
            for(j=0; j<v1.size(); j++)
            {
                if(v2[i]+v1[j]==x)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }

            }
        }
    }
    cout<<"NO"<<endl;



}
