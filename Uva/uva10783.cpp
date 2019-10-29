#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,sum,T,t;
    cin>>T;
    for(t=1; t<=T; t++)
    {   sum=0;
        cin>>a>>b;
        for(i=a; i<=b; i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
      cout<<"Case "<<t<<": "<<sum<<endl;}
        }
