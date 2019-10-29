#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    while(cin>>s)
    {
        int len =s.length();

        for(int i=0; i<len; i++)
        {
               s[i]=s[i]-7;
                cout<<s[i];

        }
        cout<<endl;
    }
        return 0;
}
