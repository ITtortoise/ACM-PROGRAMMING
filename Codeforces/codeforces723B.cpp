#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,l,count=0,w=0,a[10000];
    string s;
    cin>>n;
    getchar();
    getline(cin,s);
    l=s.length();
    for(i=0; i<l; i++)
    {
        if(s[i]=='_'||s[i]=='(')
        {
            a[k]=i;
            cout<<a[k]<<" ";
            k++;
        }
        else if(s[i]=='(')
        {
            a[k]=i;
            cout<<a[i]<<" ";
            k++;

            for(i=i+1; s[i]!=')'; i++)
            {


            }

        }
    }



}
