#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s;
    int l,k=0;
    getline(cin,s1);
    l=s1.length();
    for(int j=l-1;j>0;j--)
    {
        s[k]=s1[j];
        //cout<<s[k];
        k++;
    }
    for(int i=0; i<l; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+3;
            cout<<s[i];
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]+3;
            cout<<s[i];
        }
        else
            cout<<s[i];


    }
}
