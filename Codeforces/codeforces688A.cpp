#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k=0,l,a[1000],u=0,r=0;
    string s;
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        getchar();
        r=0;
        for(j=0;j<m;j++)
        {
            if(s[j]=='1')
                {
                 r++;
                //cout<<r;
                if(r==m)
                {k=0;
                 a[u]=k;
                 //cout<<a[u]<<" ";
                 u++;
                 break;}
                }

           else if(s[j]=='0')
            {
                k++;
                a[u]=k;
                //cout<<a[u]<<" ";
                u++;
                break;}

       }

    } sort(a,a+u);
    cout<<a[u-1];
}
