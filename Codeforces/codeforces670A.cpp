#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n,r,rem;
        cin>>n;
        if(n%7==0)
            cout<<(n/7)*2<<" "<<(n/7)*2<<endl;
        else if(n%7<=5)
        {
            if(n%7<=2)
                cout<<(n/7)*2<<" "<<((n/7)*2)+(n%7)<<endl;
            else if(n%7>2)
                cout<<(n/7)*2<<" "<<((n/7)*2)+2<<endl;
        }
        else if(n%7==6)
            cout<<(((n/7)*2)+2)-1<<" "<<((n/7)*2)+2<<endl;

}
