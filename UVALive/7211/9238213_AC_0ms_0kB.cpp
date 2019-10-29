#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a[1000],k,i;
    while(cin>>t)
    {
        for(i=0; i<5; i++)
            cin>>a[i];

        k=0;
        for(i=0; i<5; i++)
        {
            if(a[i]==t)
                k++;
        }
        cout<<k<<endl;
    }
}
