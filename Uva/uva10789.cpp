#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000
int long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k,amt[sz],p,q,t;
    char ch;
    a[0]=a[1]=1;
    for(i=2; i<sqrt(100000); i++)
        if(a[i]==0)
        {

            for(j=i+i; j<100000; j=j+i)
                a[j]=1;
        }


    string s;
    cin>>t;
    getchar();
    for(int y=1;y<=t;y++)
    {
        getline(cin,s);
        char s1[sz]="";
        memset(amt,0,100000);
        int f=0;
        for(p=0; p<s.size(); p++)
        {
            amt[s[p]-48]++;

        }
        //cout<<amt[17];
        for(p=48; p<=123; p++)
        {

            if(a[amt[p-48]]==0)
            {
                ch=p;
                s1[f]=ch;
                f++;
            }
        }
        if(f==0)
            cout<<"Case "<<y<<": "<<"empty"<<endl;

        else
        {
            sort(s1,s1+f);
            cout<<"Case "<<y<<": "<<s1<<endl;
        }
    }
    return 0;


}
