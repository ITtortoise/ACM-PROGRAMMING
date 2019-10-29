#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c,c1;
    int l=0,i,j=1,k=0,t=1;
    getline(cin,c);
    l=c.length();
    cout<<l;
    c1[0]=c[0];
    c2[0]=c[0];
    for(i=0; i<=k; i++)
    {
        for(h=0; h<=i; h++)
        {
            if(c1[i]!=c[j])
            {
                c2[t]=c[j];
                t++;
                j++;
                k++;
            }
        }
    }
}
