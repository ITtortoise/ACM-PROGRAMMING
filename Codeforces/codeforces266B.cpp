#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define sz 10000
#define ll long long
using namespace std;
int main()
{
    ll n,i,j,k,t;
    string s;
    cin>>n>>t;
    getchar();
    cin>>s;
    while(t--)
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }

        }
    }
    cout<<s;

}

