#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k=0,a[1000],b[1000],c[1000],u=0,y=0,t=0,w=0,v[1000],z[1000],e=0,f=0,q[1000];
    cin>>n;
    t=n/2;
    char s[n];
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='L')
        {
            a[k]=i;
            k++;
        }
        else if(s[i]=='R')
        {
            b[j]=i;
            j++;
        }
    }
    //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    //cout<<b[0]<<" "<<endl;
    for(i=0; i<n; i++)
    {
        if(i<k)
        {
            c[u]=a[i];
            u++;
        }
        else
        {
            c[u]=b[y];
            y++;
            u++;
        }

    }
     for(u=0;u<n/2;u++)
       {v[e]=c[u]+1;
       //cout<<v[e]<<endl;
       e++;}
       //cout<<endl;
       for(t=n/2;t<n;t++)
       {z[f]=c[t]+1;
       //cout<<z[f]<<endl;
       f++;}
       sort(z,z+(n/2));
       for(i=0;i<n/2;i++)
        {cout<<v[i]<<" "<<z[i]<<endl;}


}
