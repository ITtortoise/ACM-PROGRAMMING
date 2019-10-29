#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,f,i,j,t,k,l,m,cnt=0;
    vector<int>_list;
    cin>>n;
    if(n==1)
    {
        cin>>a;
        if(a==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else

    {
        for(i=0; i<n; i++)
        {
            cin>>t;
            _list.push_back(t);
        }
        for(i=0; i<_list.size(); i++)
        {
            if(_list[i]==0)
                cnt++;
        }
        if(cnt==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}
