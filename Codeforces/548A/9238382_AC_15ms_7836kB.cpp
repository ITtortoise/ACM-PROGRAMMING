#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i,j,k=0,l,c=0,p=0,q,l1;
    string s,s1,s2;
    getline(cin,s);
    cin>>n;
    l=s.size();
    m=l/n;
    if(l%n!=0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=k; j<l; j++)
        {
            s1+=s[j];
            c++;
            k++;
            if(c==m)
                break;
        }
        //cout<<s1<<" ";
        l1=s1.size();
        for(int t=l1-1; t>=0; t--)
            s2+=s1[t];

        if(s1!=s2)
        {
            cout<<"NO"<<endl;
            break;
        }
        else
            p++;

        s2=s1="";
    }
    if(p==n)
        cout<<"YES"<<endl;



    return 0;



}
