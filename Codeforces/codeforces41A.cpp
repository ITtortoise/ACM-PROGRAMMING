#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=0,j=0,k=0;
    char c1[100],c2[100];
    cin>>c1;
    getchar();
    cin>>c2;
    for(i=0; c1[i]!='\0'; i++)
    {
        n++;
    }
    cout<<n<<endl;
    for(i=n-1; i>=0; i--)
    {
        //cout<<c1[i];
        cout<<c1[i]<<" "<<c2[j]<<endl;
        j++;
        if(c1[i]==c2[j])
        {
            k++;
        }
    }
    cout<<k<<endl;
    if(k==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;


}
