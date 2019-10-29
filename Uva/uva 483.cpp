#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,i,j,k;
    string s,s1,s2;
    while(getline(cin,s))
    {
        int l=s.size();
        s[l]=' ';
        for(i=0; i<l; i++)
        {
            if(s[i]==' ')
                cout<<s[i];
            else
            {
                s1+=s[i];
                if(s[i+1]==' ')
                {
                    reverse(s1.begin(),s1.end());
                    cout<<s1;
                    s1="";

                }
            }
        }
        cout<<endl;
    }
    return 0;
}

