#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],i,j,k,pro,t,c=0;

    while(cin>>n)
    {   k=0;
        c++;
        pro=1;
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0; i<n; i++)

        {
            if(a[i]>0)
            {    k++;
                pro=pro*a[i];
            }
        }
        if(k>0)
        cout<<"Case #"<<c<<": The maximum product is"<<" "<<pro<<"."<<endl;
        else if(k==0)
           cout<<"Case #"<<c<<": The maximum product is"<<" "<<"0"<<"."<<endl;
    }
    return 0;

}
