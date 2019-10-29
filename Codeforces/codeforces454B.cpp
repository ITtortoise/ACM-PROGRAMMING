#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long i,j,k,l,n,ar[100001],c=0,count=0,first;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    first=ar[0];
    for(i=0;i<n-1;i++)
    {
        if(ar[i+1]-ar[i]>=0)
            continue;
        else if(ar[i+1]-ar[i]<0)
        {
            if(ar[i+1]>first)
            {
                c=1;
                break;
            }
            i+=2;
            for(j=i;j<n;j++)
            {
                if(ar[j]>=ar[j-1]&&ar[j-1]<=first)
                {
                    count++;
                    continue;
                }
                else
                {
                    c=1;
                    break;
                }
            }
            if(ar[j-1]>first)
                c=1;
            count++;
            break;
        }
    }
    if(c==1)
        cout<<"-1"<<endl;
    else
        cout<<count<<endl;

}
