#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,l=0;
    char  s1[10000],s2[10000],s3[10000];
    cin>>s1;
    cin>>s2;
    //k=s1.length();
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i])
            {
          s3[l]='0';
           cout<<s3[l];
          l++;}
        else if(s1[i]!=s2[i])
            {
                s3[l]='1';
            cout<<s3[l];
            l++;}
    }
    return 0;

}
