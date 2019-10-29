#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,k,t=0;
    while(cin>>n)
    {if(n<0)
        break;
        t++;
    s=1;i=2;k=0;
    while(s<n)
    {
       s=s*i;
       k++;
       //cout<<s<<" ";
    }
    cout<<"Case "<<t<<": "<<k<<endl;}

}
