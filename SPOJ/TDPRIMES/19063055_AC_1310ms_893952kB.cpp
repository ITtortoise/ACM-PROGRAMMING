#include<bits/stdc++.h>
#define M 1e8+5
using namespace std;
long long n,i,j,k,sqrtn;
bool Isprime[100000009];
long long arr[100000009];
vector<long long>vec;
int main()
{
    for(int i = 2; i <= sqrt(M); i++)
        if(Isprime[i] == 0)
            for(int j = i+i; j <= M; j += i)
                Isprime[j] = 1;
    arr[0]=2;
    j=0;
    for(i=3; i<1e8; i+=2)
    {
        if(!Isprime[i])
            //vec.push_back(i);
            arr[++j]=i;
    }
   // cout<<vec.size();
    for(i=0; i<5761457; i+=100)
        cout<<arr[i]<<endl;


}
