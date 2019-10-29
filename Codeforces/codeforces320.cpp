#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,k,l=0;
    string s;
    cin>>s;
    l=s.length();
    for(k=0; k<1000; k++)
    {
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
            i=i+3;
        else if(s[i]=='1'&&s[i+1]=='4')
            i=i+2;
        else if(s[i]=='1')
            i++;
        else
            {cout<<"NO";
            break;}
        if(i==l)
            {cout<<"YES";
            goto en;}
    }
    en:
    return 0;
}
