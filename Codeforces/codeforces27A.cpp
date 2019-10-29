#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n,i,j,k;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);

        for(j=1; j<=a[n-1]+1; j++)
        {
            k=0;
            for(i=0; i<n; i++)
            {
                if(a[i]==j)
                    k++;
            }
            //cout<<a[i]<<" "<<k<<endl;
            if(k==0)
            {
                cout<<j<<endl;
                break;
            }
        }



}
