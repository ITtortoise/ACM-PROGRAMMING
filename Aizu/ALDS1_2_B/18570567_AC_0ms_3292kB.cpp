/**************************************************
* BISMILLAHIR RAHMANIR RAHIM
* Author Name  : SHOHAG (ICT'13)
* University   : ICT, MBSTU
 ***************************************************/
#include<bits/stdc++.h>
#define sfi(n) scanf("%lld",&n)
#define pfi(n) printf("%lld",n)
#define pfs    printf(" ")
#define pfn    printf("\n")
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ll n,i,j,L,m,k,t,f,sum,cnt,d,rem,mod,v,r,l,row,extra,mx,mini,arr2[1000000],arr[1000000];
string str,str2;
map<ll,ll>maap;
map<ll,ll>::iterator it;
vector<ll>vec,v2,v3;
vector<ll>v4[51];
/************************************ Code Start Here ******************************************************/
int main()
{

    sfi(n);
    for(i=0; i<n; i++)
        sfi(arr[i]);

    sort(arr2,arr2+n);
    for(i=0; i<n; i++)
    {
        mini=i;
        f=0;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[mini])
            {
                f=1;
                mini=j;
            }

        }
        swap(arr[i],arr[mini]);
        if(f==1)
            cnt++;
    }
    for(i=0; i<n; i++)
    {
        if(i<n-1)
        {
            pfi(arr[i]);
            pfs;
        }
        else
        {
            pfi(arr[i]);
            pfn;
        }
    }
    cout<<cnt<<endl;

    return 0;

}
