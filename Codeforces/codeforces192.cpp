#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=1,s=0,t=0,w=0,g,l=0;
    cin>>n;
    for(i=1; i<n; i++)
    {
        s=(i*j)/2;
        j++;
        if(s>n)
        {
            i=i-1;
            j=j-1;
            t=(i*j)/2;
            break;
        }

    }
     g=1;
    for(int k=1; k<n; k++)
    {   g++;
       w=(k*g)/2;
     if(w==n-t)
        {
            if(g==k+1)
            {
                cout<<"YES";
                  goto en;
            }
        }


    }
            cout<<"NO"<<endl;
            en:
                return 0;
}
