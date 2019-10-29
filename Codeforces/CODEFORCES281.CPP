#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],s1[100000];
    int i,j=0,l=0;
    cin>>s;
    for(int m=0;s[m]!='\0';m++)
    {l++;}

    s1[j]=toupper(s[0]);
    cout<<s1[j];
    for(i=1; i<l; i++)
    {
        j++;
        s1[j]=s[i];
        cout<<s1[j];
    }


}
