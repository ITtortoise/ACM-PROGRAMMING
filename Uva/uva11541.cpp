#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 9999
long long a[sz];
using namespace std;
typedef long long LL;
int main()
{

    string s,s1,s2;
    LL n,a[sz],y;
    cin>>y;
    getchar();
    for(int T=1; T<=y; T++)
    {
        getline(cin,s);


        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s1+=' ';
                s2+=s[i];
            }
            else if(s[i]>='0'&&s[i]<='9')
                s1+=s[i];
        }
        //cout<<s1<<" "<<s2;
        LL j=0,t,h;
        stringstream ss(s1);
        memset(a,0,sizeof(a));
        while(ss>>n)
        {
            a[j]=n;

            j++;

        }
        cout<<"Case "<<T<<": ";
        for(t=0; t<s2.size(); t++)
            for(h=a[t]; h>0; h--)
                cout<<s2[t];
                cout<<endl;
        s=s1=s2="";
    }
    return 0;

}

