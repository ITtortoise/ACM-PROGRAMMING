#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,j,i,ans=0;
    char s[1000000];
    cin>>n>>a>>b;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[a-1]>s[b-1])
            ans=s[a-1]-s[b-1];
        else if(s[b-1]>s[a-1])
            ans=s[b-1]-s[a-1];
    }
    cout<<ans;
    return 0;

}
