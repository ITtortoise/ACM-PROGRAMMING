#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,k,j,l;
    cin>>n;
    getchar();
    getline(cin,s);
    l=s.length();
    if(l%2==0)
        for(i=0; i<l; i+=2)
        {
            if(i!=0)
                cout<<"-";
            cout<<s[i]<<s[i+1];
        }
    else if(l%2!=0)
    {
        for(i=0; i<l-3; i+=2)
        {
            if(i!=0)
                cout<<"-";
            cout<<s[i]<<s[i+1];
        }
        if(n>3)
        cout<<"-"<<s[l-3]<<s[l-2]<<s[l-1];
        else if(n==3)
         cout<<s[l-3]<<s[l-2]<<s[l-1];
    }


}
