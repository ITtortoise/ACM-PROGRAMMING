/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  pi    acos(-1.0)
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

double n,i,j,L,m,k,t,sum,cnt,d,rem,mod,mx,mn,v,r,l,a,b,c;
string s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{

    while(cin>>a>>b>>c)
    {
        double s;
        s=(a+b+c)/2;
        double triangle;
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        double porisima;
        porisima=(a+b+c);
        double roserad;
        roserad=(2*triangle)/porisima;
        double rosearea=(pi*roserad*roserad);
        double violentarea;
        violentarea=triangle-rosearea;
        double R;
        R=(a*b*c)/(4*triangle);
        double sunflower;
        sunflower=(pi*R*R)-triangle;
        cout << fixed << setprecision(4) <<sunflower<<' ';
        cout << fixed << setprecision(4) <<violentarea<<' ';
        cout << fixed << setprecision(4) <<rosearea<<endl;

    }


}
