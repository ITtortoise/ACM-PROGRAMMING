#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k=2,l;
    while(getline(cin,s))
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='"')
            {
                if(k%2==0)
                {
                     cout<<"``";

                    k++;
                }
                else if(k%2!=0)
                {
                   cout<<"''";
                    k++;
                }
            }

            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
