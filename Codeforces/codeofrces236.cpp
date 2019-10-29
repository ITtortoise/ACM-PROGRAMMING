#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k=0,l,m;
    cin>>s;
    l=s.length();
    for(i=0; i<l; i++)
    {
        m=0;
        for(j=0; j<i; j++)
        {
            if(s[i]==s[j])
                m++;
        }
        if(m==0)
        {
            k++;
        }
    }
    if(k%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

}
