#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i,j,k,l,one=0,two=0;
    cin>>s;
    l=strlen(s);
    if(l>3)
        cout<<"3"<<endl;
    else
    {
        for(i=0;i<l;i++)
        {
            if(s[i]=='o'||s[i]=='n'||s[i]=='e')
                one++;
            else
                two++;
        }
        cout<<one<<two<<endl;
    }

}
