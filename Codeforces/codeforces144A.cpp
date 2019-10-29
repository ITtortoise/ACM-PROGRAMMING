#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k=0,a1[100000],a2[100000],a3[100000],u=0,q=0,t,y=0,a4[10000],e=0,w=0;
    cin>>n;
    for(i=0;i<n;i++)
        {cin>>a1[i];}
        for(i=0;i<n;i++)
            {a4[y]=a1[i];
             y++;}
        //cout<<a1[5];
    sort(a1,a1+n);
    for(i=n-1;i>=0;i--)
        {a2[j]=a1[i];
        //cout<<a2[j]<<" ";
        j++;}
        for(i=0;i<n;i++)
        {if(a2[0]!=a4[i])
                q++;
            else
                break;
        }//cout<<q;
        for(e=0;e<=q-1;e++)
            a3[e]=a4[e];
        for(t=q;t<n-1;t++)
            {a3[t]=a4[t+1];}
       // for(i=0;i<n-1;i++)
            //{//cout<<a3[i];}
            //cout<<endl;
            //cout<<a2[n-1];
         for(i=n-2;i>=0;i--)
         {if(a2[n-1]!=a3[i])
                w++;
             else
                break;
         }
         cout<<w+q;
}
