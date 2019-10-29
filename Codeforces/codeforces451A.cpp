#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,low;
    cin>>n>>m;
    if(n==m)
    {
        if(n%2==0)
            cout<<"Malvika"<<endl;
        else
            cout<<"Akshat"<<endl;
    }
    else
    {
        low=min(n,m);
        //cout<<low;
        if(low%2==0)
             cout<<"Malvika"<<endl;
         else
            cout<<"Akshat"<<endl;
    }

}
