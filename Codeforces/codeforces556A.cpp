#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,one=0,zero=0;
    cin>>n;
    char s[n];
    cin>>s;
    sort(s,s+n);
    for(i=0;i<n;i++)
    {if(s[i]=='1')
        one++;
    else
        zero++;}
       if(one>=zero)
        cout<<one-zero;
       else
        cout<<zero-one;
}
