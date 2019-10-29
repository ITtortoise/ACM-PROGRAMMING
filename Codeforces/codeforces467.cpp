#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,k=0,r,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        r=0;
        r=b-a;
        if(r>=2)
            k++;
    }
    cout<<k;
    return 0;
}
