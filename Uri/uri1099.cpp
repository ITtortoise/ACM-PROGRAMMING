#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {int a,b,s=0;
    cin>>a>>b;
    if(a>b)
    {
        for(int i=b+1;i<=a-1;i++)
        {
            if(i%2!=0)
               s=s+i;
        }
         cout<<s<<endl;
    }
    else if(a<b)
    {
        for(int i=a+1;i<=b-1;i++)
        {
            if(i%2!=0)
              s=s+i;
        }
        cout<<s<<endl;
    }
    else if(a==b)
        cout<<"0"<<endl;}
}
