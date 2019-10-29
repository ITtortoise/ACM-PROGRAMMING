#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll n,i,j,k,x,y,l,mid;
    string s,s2;
    cin>>n;
    getchar();
    cin>>s;
    l=s.size();
    char s1[l-1];
    for(i=0; i<l; i++)
    {
        if(i==0)
        {
            mid=l/2;
            if(l%2==0)
                mid=mid-1;
            x=mid;
            y=mid;
            s1[mid]=s[0];
            s.erase(s.begin()+0);
            //cout<<mid<<" ";

        }
        else if(i>0&&s.size()%2==0)
        {
            x=x-1;
            s1[x]=s[0];
            s.erase(s.begin()+0);
            //cout<<x<<" ";
        }
        else if(i>0&&s.size()%2!=0)
        {
            y=y+1;
            s1[y]=s[0];
            s.erase(s.begin()+0);
            //cout<<y<<" ";
        }


    } for(i=0;i<l;i++)
       cout<<s1[i];

}

