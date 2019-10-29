#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l;
    string s1,s2,s3;
    cin>>s1;

    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
        {
            s2[i]=tolower(s1[i]);
        }

        else
            s2[i]=s1[i];

    }

    for(i=0; s1[i]!='\0'; i++)
    {
        //cout<<s2[i];
        if(s2[i]!='a'&&s2[i]!='e'&&s2[i]!='i'&&s2[i]!='o'&&s2[i]!='u'&&s2[i]!='y')
            {s3[i]=s2[i];
             cout<<".";
            cout<<s3[i];}
    }

return 0;


}
