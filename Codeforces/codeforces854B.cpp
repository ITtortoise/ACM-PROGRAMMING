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

        ll tr,tm,MX,MN;
        cin>>tr>>tm;
        if(tm==0)
        {
            cout<<"0 0"<<endl;
            return 0;
        }
        if(tr==tm)
            MN=0;
        if(tr!=tm)
            MN=1;
        int possible=tm*2;
        int fr=tr-tm;
        if(fr>=possible)
            MX=possible;
        else if(fr<possible)
            MX=tr-tm;
        cout<<MN<<" "<<MX<<endl;




    return 0;
}

