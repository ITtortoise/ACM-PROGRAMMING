#include<bits/stdc++.h>
using namespace std;
double p,l;
int remi;
double remd;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='o')
            p++;
        else
            l++;
    }
    //cout<<l<<' '<<p;
    if(p==0||l==0)
        cout<<"YES";
    else if(p>0||l>0)
    {

        remi=l/p;
        remd=double(l/p);
      //  printf("%lf",remd-remi);
        if(remd-remi>0)
            cout<<"NO";
        else
            cout<<"YES";
    }
    else
        cout<<"NO";
}
