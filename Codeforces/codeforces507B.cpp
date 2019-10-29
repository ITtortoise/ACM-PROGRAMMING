#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

int main()
{
     double x1,x2,y1,y2,r,d,s;
     cin>>r>>x1>>y1>>x2>>y2;
     d=sqrt((abs(x1-x2)*abs(x1-x2))+(abs(y1-y2)*abs(y1-y2)));
     s=(d/(2*r));
     cout<<ceil(s);
    return 0;
}
