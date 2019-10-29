#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,c=0,j,i,k=0,l=0;
    cin>>n;
    int a[n],b[n],a1[n];
    for(i=0; i<n; i++)
        cin>>a[i]>>a1[i];
    for(i=0; i<n; i=l)
    {
            c=0;
            for(j=i; j<n; j++)
            {
                if(a[i]==a[j]&&a1[i]==a1[j])
                {
                    c++;
                    b[k]=c;

                }
                else
                    break;

            } //cout<<b[k]<<endl;
            k++;


    }
    sort(b,b+k);

    if(b[k-1]==0)
        cout<<"1";
    else
        cout<<b[k-1];



}
