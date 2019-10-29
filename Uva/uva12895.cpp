#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int i,j,a[10000] ,n,rem1=0,res=0,m=0,k=0,sum=0,p,w,s=0;

        cin>>n;
        m=n;
        p=n;
        i=0;
        while(p>0)
        {
            a[i]=p%10;
            p=p/10;
            k++;
            i++;
        }
        sum=0;
            for(int i=0; i<k; i++)
               {
                   w=1;
                   for(j=0;j<k;j++)
                   {
                       w=w*a[i];
                   }
                   sum+=w;
                   //cout<<sum<<" "<<w<<endl;

               }
        if(sum==m)
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }

}
