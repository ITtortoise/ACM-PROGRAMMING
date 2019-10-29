#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define ll long long
using namespace std;
int main()
{
    ll n,i,j,k;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='.')
            cout<<"0";
        else if(s[i]=='-')
        {
           if(s[i+1]=='.')
            cout<<"1";
           else if(s[i+1]=='-')
            cout<<"2";
           i++;
        }
    }

}

