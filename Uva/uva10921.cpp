#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{

    string s;
    while(getline(cin,s))
    {
        int n,m,i,j,k,l,c=0,p,q;
        l=s.size();
        map<char,char>m1;
        m1['A']='2';
        m1['B']='2';
        m1['C']='2';
        m1['D']='3';
        m1['E']='3';
        m1['F']='3';
        m1['G']='4';
        m1['H']='4';
        m1['I']='4';
        m1['J']='5';
        m1['K']='5';
        m1['L']='5';
        m1['M']='6';
        m1['N']='6';
        m1['O']='6';
        m1['P']='7';
        m1['Q']='7';
        m1['R']='7';
        m1['S']='7';
        m1['T']='8';
        m1['U']='8';
        m1['V']='8';
        m1['W']='9';
        m1['X']='9';
        m1['Y']='9';
        m1['Z']='9';
        m1['-']='-';
        m1[' ']=' ';
        m1['0']='0';
        m1['9']='9';
        m1['8']='8';
        m1['7']='7';
        m1['6']='6';
        m1['5']='5';
        m1['4']='4';
        m1['3']='3';
        m1['2']='2';
        m1['1']='1';
        for(i=0; i<l; i++)
            cout<<m1[s[i]];
        cout<<endl;
        s="";
    }
    return 0;


}

