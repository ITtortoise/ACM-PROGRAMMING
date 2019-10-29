#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s=0,i;
    cin>>a>>b;
    if(a<b)
    {
        for(i=a; i<=b; i++)
        {
            if(i%13!=0)
                s=s+i;
        }
        cout<<s<<endl;
    }
    else if(a>b)
    {
        for(i=b; i<=a; i++)
        {
            if(i%13!=0)
                s=s+i;
        }
        cout<<s<<endl;
    }
    else if(a==b)
        cout<<"0"<<endl;
}
