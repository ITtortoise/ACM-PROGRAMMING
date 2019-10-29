#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,e=0,n=0;
    cin>>a>>b>>c>>x>>y>>z;
    if(a>x)
        e=e+(a-x)/2;
    else if(x>a)
        n=n+(x-a);
    if(b>y)
        e=e+(b-y)/2;
    else if(y>b)
        n=n+(y-b);
    if(c>z)
        e=e+(c-z)/2;
    else if(z>c)
        n=n+(z-c);
    if(e>=n)
        cout<<"YES";
    else
        cout<<"NO";

}
