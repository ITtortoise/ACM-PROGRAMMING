#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,k,a;
    cin>>n>>k;
    if(n%k==0)
    {
        a=n/k;
        cout<<(k*(a+1))<<endl;
    }
    else
    {
        a=(n/k)+1;
        //cout<<a<<endl;
        cout<<(k*a)<<endl;
    }

    return 0;
}
