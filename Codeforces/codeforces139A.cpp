#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,i,j,k=0,d=0,s=0,a[100],y,w=0;
    cin>>p;
    for(y=0;y<7;y++)
    {cin>>a[y];}
    for(i=0; i<50; j++)
    {
        for(i=0; i<7; i++)
        {
            s=s+a[i];
            if(s>=p)
            {
                k++;
                if(k==1)
                {
                 if((i+1)>7)
                    cout<<(i+1)%7;
                 else
                    cout<<(i+1);
                return 0;}
            }

        }

    }

}
