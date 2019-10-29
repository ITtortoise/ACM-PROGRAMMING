#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i,j,k,l,c=0,p,q,amt[sz];
    string s,s1;
   // cin>>m;
    //getchar();

        getline(cin,s);
        l=s.size();
        for(i=0; i<l; i++)
        {
            s1[i]=toupper(s[i]);
            amt[s1[i]-'a']++;

        }


    //cout<<amt[s[i]-'a']<<endl;
    return 0;


}
