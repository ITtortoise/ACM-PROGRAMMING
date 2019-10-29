#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,s,a,b;
    while(cin>>x>>y)
    {
        b=min(x,y);
        a=max(x,y);
        s=0;
        if(a<=0||b<=0)
            break;
        for(int i=b; i<=a; i++)
        {
            s=s+i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<s<<endl;
    }
    return 0;

}
