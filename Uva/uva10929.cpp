#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{

    string s;
    while(getline(cin,s))
    {   if(s=="0")
          break;
        int n,m,i,j,k,l=0,c=0,p,q,s1=0,s2=0,v=0;
        l=s.size();
        for(i=0; i<l; i+=2)
          s1=s1+s[i]-'0';
        for(j=1; j<l; j+=2)
          s2=s2+s[j]-'0';


        //cout<<s1<<" "<<s2<<endl;
        v=abs(s1-s2);
        if(v%11==0)
            cout<<s<<" is a multiple of 11."<<endl;
        else
            cout<<s<<" is not a multiple of 11."<<endl;
            s="";
    }


    return 0;


}

