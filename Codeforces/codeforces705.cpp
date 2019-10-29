#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="I hate ",s2="I love ",s3="that ",s4="it";
    int n,k=1;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        k++;
        if(k%2==0)
            cout<<s1;
        else if(k%2!=0)
            cout<<s2;
        if(i==1)
            {cout<<s4;
            break;}
        else if(i!=1)
            cout<<s3;

    }
}
