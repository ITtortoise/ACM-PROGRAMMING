#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,j,k,a[100000],q=0,w=0,t,h=0,m=0;
    char c[100000];
    cin>>n>>x;
    for(i=0; i<n; i++)
    {
        cin>>c[i]>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(c[i]=='-')
        {
            if(x>=a[i])
            {
                q=x-a[i];
                x=q;
            }
            else
                h++;
        }
        else if(c[i]=='+')
        {
            x=x+a[i];
        }
    }cout<<x<<" "<<h;


}
