#include<bits/stdc++.h>
#define M 1009
using namespace std;
long long n,i,j,k,sqrtn,cnt,m;
int Isprime[1009],arr[1009];
vector<long long>vec;
int main()
{
    for(int i = 2; i <= sqrt(M); i++)
        if(Isprime[i] == 0)
            for(int j = i+i; j <= M; j += i)
                Isprime[j] = 1;
    for(i=1; i<1009; i++)
    {
        if(Isprime[i]==0)
            vec.push_back(i);
    }
    //cout<<vec.size()/2+5;

    for(i=0; i<96; i++)
    {
        //
        arr[vec[i]+vec[i+1]+1]=1;
    }
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        if(arr[i]==1&&Isprime[i]==0)
        {
            //cout<<i<<' ';
            cnt++;
        }

    }
    if(cnt>=m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



}
