#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,s1[1000],s2[1000],i,j,k=0,u=0,h=0,t=0;
    cin>>x>>y>>a>>b;
    j=a;
    for(i=a;i<=b;i=i+x)
    {
        s1[u]=i;
        s2[t]=j;
        //cout<<s1[u]<<" "<<s2[u]<<endl;
        u++;
        t++;
        k++;
        j=j+y;

    }//cout<<k;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(s1[i]==s2[j])
                h++;
        }
    }cout<<h;

}
