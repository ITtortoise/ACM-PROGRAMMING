#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
int long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i,j,k,l,c=0,p,q;
    map<char,char>m1;
    m1[',']='M';
    m1['M']='N';
    m1['N']='B';
    m1['B']='V';
    m1['C']='X';
    m1['X']='Z';
    m1[';']='L';
    m1['L']='K';
    m1['K']='J';
    m1['J']='H';
    m1['H']='G';
    m1['G']='F';
    m1['F']='D';
    m1['D']='S';
    m1['S']='A';
    m1['[']='P';
    m1['P']='O';
    m1['O']='I';
    m1['I']='U';
    m1['U']='Y';
    m1['Y']='T';
    m1['T']='R';
    m1['R']='E';
    m1['E']='W';
    m1['W']='Q';
    m1['.'] = ',';
    m1['/'] = '.';
    m1[' '] = ' ';

    char a;
    map <char, char>::iterator itr;
    while(!cin.eof())
    {

        cin>>a;
        itr = m1.find(a);
        if( itr == m1.end() )
            cout << a;
        else
            cout << itr->second;
    }
    cout << endl;



    return 0;


}

