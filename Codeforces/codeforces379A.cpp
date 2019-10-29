#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,r,s=0,t1,t2=0,t3;
    cin>>n>>m;
    t1=n;
    t3=n;
    while(t1>=m)
    {
        t1=t1/m;
        s=s+t1;
        t2=t3-(t1*m);
        t1=t1+t2;
        t3=t1;
    }
    cout<<s+n;
}
