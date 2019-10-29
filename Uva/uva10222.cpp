#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i,j,k,l,c=0,p,q;
    string s,s1;
    getline(cin,s);
    l=s.size();
    for(i=0; i<l; i++)
        s1+=tolower(s[i]);
    map<char,char>m1;
    m1['/']=',';
    m1['.']='m';
    m1[',']='n';
    m1['m']='b';
    m1['n']='v';
    m1['b']='c';
    m1['v']='x';
    m1['c']='z';
    m1['z']='z';
    m1['a'-':']='l';
    m1[';']='k';
    m1['l']='j';
    m1['k']='h';
    m1['j']='g';
    m1['h']='f';
    m1['g']='d';
    m1['f']='s';
    m1['d']='a';
    m1['s']='s';
    m1['a']='a';
    m1[']']='p';
    m1['[']='o';
    m1['p']='i';
    m1['o']='u';
    m1['i']='y';
    m1['u']='t';
    m1['y']='r';
    m1['t']='e';
    m1['r']='w';
    m1['e']='q';
    m1['w']='w';
    m1['q']='q';
    m1['=']='0';
    m1['-']='9';
    m1['0']='8';
    m1['9']='7';
    m1['8']='6';
    m1['7']='5';
    m1['6']='4';
    m1['5']='3';
    m1['4']='2';
    m1['3']='1';
    m1['2']='2';
    m1['1']='1';
    m1[' ']=' ';
    m1['a'-'2']=',';
    m1['0'+',']='[';

    for(i=0; i<l; i++)
        cout<<m1[s1[i]];
    cout<<endl;

    return 0;


}

