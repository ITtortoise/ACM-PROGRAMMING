#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m=0,y=0;
    string s;
    cin>>n;
    cin>>s;
    l=s.length();
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(s[i]==s[j])
            {
                m++;
                break;
            }
            else
                break;
        }
    }cout<<m;
   return 0;
}
