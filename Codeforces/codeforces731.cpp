#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,k,l,t1,t2,t=0,temp,temp1,temp2;
    string s;
    getline(cin,s);
    l=s.size();
    for(j=0; j<l-1; j++)
    {
        t1=abs((s[j])-(s[j+1]));
        t2=abs(t1-26);
        t=t+min(t1,t2);
    }
    temp1=abs(('a')-s[0]);
    temp2=abs(temp1-26);
    cout<<t+min(temp1,temp2);
}


