#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i=0,j,k,m;
    cin>>s;
    for(j=0; j<strlen(s); j=i)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {  k++;
            i=i+3;
            if(k==1)
                cout<<" ";

        }

        else
        {   //m=0;
            k=0;
            cout<<s[i];
            i++;

        }




    }

}
