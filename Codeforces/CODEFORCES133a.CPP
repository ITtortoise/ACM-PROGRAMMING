#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    char c[10000];
    cin>>c;
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='H'||c[i]=='Q'||c[i]=='9'||(c[i]=='1'&&c[i]=='+')||(c[i]=='2'&&c[i]=='+')||(c[i]=='3'&&c[i]=='+')||(c[i]=='4'&&c[i]=='+')||(c[i]=='5'&&c[i]=='+')||(c[i]=='6'&&c[i]=='+')||(c[i]=='7'&&c[i]=='+')||(c[i]=='8'&&c[i]=='+')||(c[i]=='9'&&c[i]=='+'))
            k++;
        else
        {

        }

    }if(k>0)
      cout<<"YES";
    else
        cout<<"NO";
}
