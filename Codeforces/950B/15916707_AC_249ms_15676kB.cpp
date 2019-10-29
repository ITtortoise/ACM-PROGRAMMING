#include<bits/stdc++.h>
#define   sf   scanf
#define   pf   printf
#define   ll   long long
#define   sz   1000001
#define   pi   acos(-1.0)
#define   ff   first
#define   ss   second
#define   pb   push_back
#define   all(x)  x.begin(),x.end()
#define   int_max 1000000000000000001

using namespace std;

/*----------------- Start Here -----------------*/

ll n,m,i,j,k,a1[sz],a2[sz],B1=0,B2=0,c;

int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++) cin>>a1[i];

    for(i=0; i<m; i++) cin>>a2[i];

    i=j=0;
    while(i<n && j<m){

        if(B1==B2){
            B1=B2=0;
            c++;
        }

        if(B1 < B2){
            B1+=a1[i];
            i++;
        }
        else{
            B2+=a2[j];
            j++;
        }

    }
    cout<<c<<endl;


    return 0;
}