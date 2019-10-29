#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,s,s2,c=0,x,r,l,rem=0,y,z,mod,a[sz][sz],b[sz][sz],R[sz][sz],MX,p,q,A,B,C,D,E,F,G;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>r>>c;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            cin>>b[i][j];

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            a[i][j]=1;
            R[i][j]=0;
        }
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            if(b[i][j]==0)
            {
                for(y=0; y<c; y++)
                    a[i][y]=0;
                for(q=0; q<r; q++)
                    a[q][j]=0;
            }


    for(A=0; A<r; A++)
    {
        for(B=0; B<c; B++)
        {
            for(C=0; C<c; C++)
                if(a[A][C]==1)
                    R[A][B]=1;

            for(D=0; D<r; D++)
                if(a[D][B]==1)
                    R[A][B]=1;

        }
    }
    for(E=0; E<r; E++)
        for(F=0; F<c; F++)
            if(R[E][F]!=b[E][F])
            {
                cout<<"NO"<<endl;
                return 0;
            }


    cout<<"YES"<<endl;
    for(l=0; l<r; l++)
    {
        for(z=0; z<c; z++)
            cout<<a[l][z]<<" ";
        cout<<endl;
    }


    return 0;
}

