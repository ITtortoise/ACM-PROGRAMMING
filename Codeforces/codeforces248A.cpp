#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,a1[100000],a2[100000],w=0,x=0,y=0,z=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
        cin>>a2[j];
        j++;
    }
    for(i=0;i<n;i++)
    {
        if(a1[i]==1)
            w++;
        else if(a1[i]==0)
            x++;
    }
    //cout<<<<endl;
    for(j=0;j<n;j++)
    {
        if(a2[j]==1)
            y++;
        else if(a2[j]==0)
            z++;

    }cout<<min(y,z)+min(w,x);
}
