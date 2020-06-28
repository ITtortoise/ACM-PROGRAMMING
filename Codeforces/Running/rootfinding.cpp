#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  _mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()

using namespace std;
vector<ll>vec;
map<ll,ll>mp;
long long m,i,j;
double FindNthRoot(double n)
{

    double epsilon = 0.00000001;
    double low,high;
    if (n >= 0 and n <= 1)
         low=0,high=1;

    else
        low = 1,high = n;

    double guess = (high+low)/2;

    while(abs((pow(guess,2))-n)>=epsilon)
    {
        if(pow(guess,2)>n)
            high=guess;
        else
            low=guess;
        //printf("%f\n",guess);
        guess = (high+low)/2;
        //break;
    }
    return guess;


}

int main()
{
    double n;
    cin>>n;
    printf("%.16f",FindNthRoot(n));
    return 0;
}
