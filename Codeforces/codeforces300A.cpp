#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],i,k=0,v1[1000],l=0,v2[1000],m=0,v3[1000],p=0,u=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i++)

    {
        if(a[i]<0)
        {
            v1[k]=a[i];
            //cout<<v1[k]<<endl;
            k++;
        }
        else if(a[i]>0)
        {
            v2[u]=a[i];
            u++;
            m=1;
        }

    }

    if(m==1)
        {

            cout<<"1"<<" "<<v1[0]<<endl;
            cout<<u<<" ";
            for(i=0; i<u; i++)
            {
                cout<<v2[i]<<" ";
            }
            cout<<endl<<n-1-u<<" ";
            for(i=1; i<k; i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<"0"<<endl;
        }
    else if(m==0)
    {
        cout<<"1"<<" "<<v1[0]<<endl;
        cout<<"2"<<" "<<v1[1]<<" "<<v1[2]<<endl;
        cout<<n-3<<" ";
        for(i=3;i<k;i++)
            cout<<v1[i]<<" ";
        cout<<"0"<<endl;

    }


}



