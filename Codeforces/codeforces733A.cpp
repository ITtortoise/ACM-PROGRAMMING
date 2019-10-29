#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j=0,k[1000],a[1000],h=0,l,u=0,p,t=0,d=0,mini=0;
        string s;
        getline(cin,s);
        l=s.size();
        //cout<<l<<endl;
        for(i=0; i<l; i++)
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
            {
                k[j]=i+1;
                //cout<<k[j];
                j++;
                u++;
            }
        a[0]=0;
        //cout<<a[0]<<" ";
        for(i=1; i<=u; i++)
        {
            a[i]=k[t];
            //cout<<a[i]<<" ";
            t++;
        }
        a[u+1]=l+1;
        //cout<<a[u+1]<<" ";
        //sort(k,k+u);
        for(i=0; i<u+1; i++)
        {
            //cout<<a[i]<<" ";
            d=fabs(a[i+1]-a[i]);
            if(i==0)
                mini=d;
            if(d>mini)
                mini=d;


        }
        cout<<mini<<endl;


    return 0;



}
