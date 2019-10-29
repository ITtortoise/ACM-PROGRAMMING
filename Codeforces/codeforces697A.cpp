#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int t,s,x,n1=0,n3=0;
        double n2=0,n4=0;
        cin>>t>>s>>x;
        if(x==t)
            cout<<"YES"<<endl;
        else if(t>x)
            cout<<"NO"<<endl;
        else if(t<x)
        {
            n1=(x-t)/s;
            cout<<n1<<endl;
            n2=(x-t)/s;
            cout<<n2<<endl;
            n3=(x-(t+1))/s;
            cout<<n3<<endl;
            n4=(x-(t+1))/s;
            cout<<n4<<endl;
            if(n2-n1==0||n3-n4==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
