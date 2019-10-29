#include<bits/stdc++.h>
using namespace std;
int findNumberOfTriangles(int arr[], int n)
{

    int count1 = 0;

    for (int i = 0; i < n-2; ++i)
    {
        int k = i+2;
        for (int j = i+1; j < n; ++j)
        {

            while (k < n && arr[i] + arr[j] > arr[k])
                ++k;

            //if(k>j)
                count1 += k - j - 1;
        }
    }

    return count1;
}

int main()
{
    int test,t;
    cin>>t;
    for(test=1; test<=t; test++)
    {
        int arr[100000],n,i;
        memset(arr,0,100000);
        cin>>n;
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);

        printf("Case %d: %d\n",test,findNumberOfTriangles( arr,n));
    }


    return 0;
}
