#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i,s=0,s1=0;
    cin>>k>>r;
     for(i=1; i<100; i++)
    {
        s1=k*i;
        if((s1-r)%10==0)
        {
            cout<<i<<endl;
            goto e;
        }
    }
    for(i=1; i<100; i++)
    {
        s=k*i;
        if(s%10==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    e:
    return 0;

}
