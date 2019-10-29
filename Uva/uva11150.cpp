#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,r,rem,p,q;
    while(cin>>n)
    {
        r=0;
        rem=0;
        p=0;
        q=0;
        rem=n%2;
        if(rem==0)
        {
            p=n*2;
            r=p-(n/2);
            cout<<r<<endl;
        }
        else if(rem!=0)
        {
            q=n+1;
            p=n*2;
            r=p-(q/2);
            cout<<r<<endl;
        }
    }
    return 0;
}
