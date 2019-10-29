#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int n,s=0;
        cin>>n;
        long long int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                s=s+(a[j]-1);
            }
            //cout<<s<<endl;

        }   //s=s+a[n-1];
        cout<<s;

}
