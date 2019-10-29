#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,i,j=0,c=2,v=0;
    cin>>k>>l;
    v=k;
    for(i=1; i<c; i++)
    {   k=v;
        c++;
        k=pow(k,i);
        cout<<k<<" ";
        if(k==l)
        {
            cout<<"YES"<<endl<<i-1;
            break;
        }
        else if(k>l)
        {
            cout<<"NO";
            break;
        }
     }
}
