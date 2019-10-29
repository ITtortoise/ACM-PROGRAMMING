#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int i,j,k=0,l,c=0;
    getline(cin,s);
    l=s.size();
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='0'&&k==0)
        {
            k++;
            continue;

        }

         cout<<s[i];
        if(s[i]=='1')
            c++;
        if(c==l-1)
            break;




    }
    cout<<endl;



}
