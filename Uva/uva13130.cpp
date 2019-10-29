#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[5],i,j,k,T;
    cin>>T;
    for(int t=0;t<T;t++)
    { j=1;
      k=0;
        for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        if(a[j]==a[i]+1)
            k++;
            j++;

    }//cout<<k;
    if(k==4)
    cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;}

}
