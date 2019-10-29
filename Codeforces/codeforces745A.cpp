#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 123456
typedef long long LL;
using namespace std;

int main()
{
    int n,i,j,k,l;
    char s[12345],us[12345],ch;
    map <string,int> mp;
    cin>>s;
    l=strlen(s);
    for(k=0; k<l; k++)
    {
        us[0]=s[l-1];
        for(i=1,j=0; j<l-1; i++,j++)
            us[i]=s[j];

        us[i]='\0';
        strcpy(s,us);
        mp[us]=0;
    }
    cout<<mp.size()<<endl;

    return 0;
}
