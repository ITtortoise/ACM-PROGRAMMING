#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,r=0,w=0;
    cin>>n>>m>>a>>b;
    if(n%m==0)
        cout<<(n/m)*b;
    else
        {w=n%m;
        r=n/m;
        cout<<(r*b)+(w*a);}
}
