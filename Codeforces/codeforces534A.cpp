#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,j;
    cin>>n;
    if(n==2)
    {
        cout<<n-1<<"\n";
        cout<<"1"<<"\n";
        goto end;
    }
    if(n==3)
    {
        cout<<n-1<<"\n";
        cout<<"1"<<" "<<"3"<<"\n";
        goto end;
    }
    cout<<n<<"\n";
    if(n%2==0)
    {
        {
            for(i=2; i<=n; i=i+2)

                cout<<i<<" ";
        }
        for(i=1; i<=n-1; i=i+2)
            cout<<i<<" ";
    }
    else if(n%2!=0)
    {
        {
            for(i=1; i<=n; i=i+2)

                cout<<i<<" ";
        }
        for(i=2; i<=n-1; i=i+2)
            cout<<i<<" ";
    }

    cout<<"\n";
    end:
        return 0;

}
