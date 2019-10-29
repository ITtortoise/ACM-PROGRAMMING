#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=0,i,k=0,l=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        getchar();
        if(s=="X++"||s=="++X")
            {b++;}
        else if(s=="X--"||s=="--X")
            {b--;}
    }

     cout<<b;
     return 0;


}
