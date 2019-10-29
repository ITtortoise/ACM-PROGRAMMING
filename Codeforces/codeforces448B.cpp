#include<bits/stdc++.h>
#define   all(x) x.begin(),x.end()
using namespace std;
int n,m=0,k,i,j=0,c;
int main()
{

    string s,t,s1,t1;
    cin>>s>>t;
    for(i=0; i<s.size(); i++)if(s[i]==t[j])j++;
    if(j==t.size())
    {
        cout<<"automaton"<<endl;
        return 0;
    }
    for(k=0; k<t.size(); k++)
    {
        c=s.find(t[k]);
        if(c==-1)
        {
            cout<<"need tree"<<endl;
            return 0;
        }
        else s[c]='0';
    }
    if(s.size()==t.size())
        cout<<"array"<<endl;
    else cout<<"both"<<endl;


    return 0;
}
