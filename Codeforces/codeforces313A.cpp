#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n=0,m,a=0,b=0,v1=0,v2=0,v=0,k=0;
    cin>>m;
    n=m;
    if(n<0)
    {   n=n*(-1);
        a=n%10;
        v1=n/10;
        b=v1%10;
        v2=v1/10;
        v=(v2*10)+a;
        //cout<<v1<<" "<<v;

        if(v1>0 && v>0)
        cout<<"-"<<min(v1,v);
        else if(v1==0||v==0)
           cout<<"0";
    }
    else
        cout<<m;

}
