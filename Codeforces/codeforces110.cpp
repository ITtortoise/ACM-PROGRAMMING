#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='4'||s[i]=='7')
            k++;
    }

    //cout<<k;
    if(k==4 || k==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
