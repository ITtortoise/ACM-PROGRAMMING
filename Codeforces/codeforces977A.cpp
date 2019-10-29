#include<bits/stdc++.h>
using namespace std;
long long n,i,j,k,rem,cnt=0;
void fun(int n)
{
    rem=n%10;
    //cout<<rem<<' ';
    //return;
    if(rem==0)
    {
        n=n/10;
        //cout<<n<<' ';
         cnt++;if(cnt==k)
        {
            cout<<n<<endl;
            return ;
        }
        fun(n);


    }
    else
    {
        n=n-1;
        //cout<<n<<' ';
        cnt++;
        if(cnt==k)
        {
            cout<<n<<endl;
            return ;
        }
        fun(n);

    }

}
int main()
{

    cin>>n>>k;
    fun(n);
}
