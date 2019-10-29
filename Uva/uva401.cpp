#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,k,l,c=0,p,q;
    string s1,s2,s3;
    map<char,char>m;
    m['A']='A';
    m['E']='3';
    m['H']='H';
    m['I']='I';
    m['J']='L';
    m['L']='J';
    m['M']='M';
    m['O']='O';
    m['S']='2';
    m['T']='T';
    m['U']='U';
    m['V']='V';
    m['W']='W';
    m['X']='X';
    m['Y']='Y';
    m['Z']='5';
    m['1']='1';
    m['2']='S';
    m['3']='E';
    m['5']='Z';
    m['8']='8';
    while(cin>>s1)
    {
        l=s1.size();
        for(i=l-1; i>=0; i--)
        {
            s2+=s1[i];
            s3+=m[s1[i]];
        }


        if(s2==s1&&s3==s1)
            cout<<s1<<" -- is a mirrored palindrome."<<endl;
        else if(s2==s1&&s3!=s1)
            cout<<s1<<" -- is a regular palindrome."<<endl;

        else if(s2!=s1&&s3==s1)
            cout<<s1<<" -- is a mirrored string."<<endl;
        else
            cout<<s1<<" -- is not a palindrome."<<endl;
            cout<<endl;
        s1=s2=s3="";
        l=0;
    }




    return 0;


}
