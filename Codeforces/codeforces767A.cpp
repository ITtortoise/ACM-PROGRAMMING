#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,a1[10000],a2[10000],u=0,i,j=0,k=0,x=0,y=0,t=0,g=0;
    cin>>n>>m>>z;
    for(i=1;i<=z;i++)
    { x=i*n;
    if(x<=z)
        {u++;
            a1[k]=x;
        k++;
        }
    else
        break;
    }
     for(i=1;i<=z;i++)
    {
      y=i*m;
    if(y<=z)
        {g++;
        a2[j]=y;
        j++;}
    else
        break;
    }


    for(i=0;i<u;i++)
    {
        for(j=0;j<g;j++)
        {
            if(a1[i]==a2[j])
                t++;
        }
    }cout<<t;
}
