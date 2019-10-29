#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,n,i,j,x,y,z;
    cin>>l>>r;
    if(l%2==0)
    {
        x=l;
        y=l+1;
        z=l+2;
        if(y<r&&z<=r)
            cout<<x<<" "<<y<<" "<<z<<endl;
        else
            cout<<"-1"<<endl;
    }
    else if(l%2!=0)
    {
        x=l+1;
        y=l+2;
        z=l+3;
        if(y<r&&z<=r)
            cout<<x<<" "<<y<<" "<<z<<endl;
        else
            cout<<"-1"<<endl;
    }

}
