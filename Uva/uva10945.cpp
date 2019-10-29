#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{

    string s,s1;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        int n,m,i,j,k,l,c=0,p=0,q;
        for(i=0; i<s.size(); i++)
        {

            if(s[i]>='A'&&s[i]<='Z')
                s1+=tolower(s[i]);
            else if(s[i]>='a'&&s[i]<='z')
                s1+=s[i];
        }
        l=s1.size();
        if(l%2==0)
        {
            for(j=0,k=l-1; j<l/2,k>=l/2; j++,k--)
                if(s1[j]!=s1[k])
                {
                    c=1;
                    break;
                }
        }
        else if(l%2!=0)
        {
            for(j=0,k=l-1; j<l/2,k>l/2; j++,k--)
                if(s1[j]!=s1[k])
                {
                    c=1;
                    break;
                }
        }

        if(c==0)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
        s="";
        s1="";
    }

    return 0;


}

