#include<bits/stdc++.h>
using namespace std;
char s[10000000];
long long int a[10000000],c,n,i;

int main()
{
    cin>>n;
    for(i=0; i<n; i++)
        cin>>s[i];

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
    {
        if(s[c]=='>')
        {
            c+=a[c];
            if(c<0||c>=n)
            {
                cout<<"FINITE"<<endl;
                return 0;
            }
        }
        else if(s[c]=='<')
        {
            c-=a[c];
            if(c<0||c>=n)
            {
                cout<<"FINITE"<<endl;
                return 0;
            }
        }
    }
    cout<<"INFINITE"<<endl;}
