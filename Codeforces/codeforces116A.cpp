#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100000],A[100000],j=0;
    cin>>n;
    for(i=0; i<(n*2); i++)
    {
        cin>>a[i];
    }
    for(i=0; i<(n*2); i=i+2)
    {   A[0]=0;
        A[j+1]=A[j]+(a[i+1]-a[i]);
        j++;
    }
        sort(A,A+n);
        cout<<A[n-1]<<endl;
        return 0;
}
