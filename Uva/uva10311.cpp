#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef int in ;
typedef unsigned long long ull ;
const double pi = 2*acos(0) ;
#define maxi 40000
#define pf printf
#define sc scanf
#define pb push_back
#define MEM(x,y) (memset((x),(y),sizeof(x)))
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define load(array,size)  for(int i=0 ; i<size ; i++) cin>>array[i]  ;
#define new_line  pf("\n")
#define clear_data(array) memset(array,0,sizeof(array))
#define highest_int 2147483647

#define maxi  100000005
bool prime[maxi] ;

void isPrime()
{
    prime[0] = prime[1] =true ;
    prime[2] = false ;
    int i,j ;
    for(i=3 ; i<=sqrt(maxi) ; i+=2)
    {
        if(prime[i]==false)
        {
            for(j=i*i ; j<=maxi ; j+=(2*i))
            {
                prime[j] = true ;
            }
        }
    }
}


int main()
{
    int n ,i,k;
    isPrime() ;
    while(sc("%d",&n)==1)
    {
        int f =0 ;
        if(n%2)
        {
            k = n-2 ;
            if(k>2 && prime[k]==false)
                pf("%d is the sum of %d and %d.\n",n,2,k) ;
            else
                pf("%d is not the sum of two primes!\n",n) ;
        }
        else
        {
            for(i= n/2+1 ; i<n ; i++)
            {
                if(prime[i]==false && prime[n-i]==false && (n-i)%2!=0)
                {
                    pf("%d is the sum of %d and %d.\n",n,n-i,i) ;
                    f =1 ;
                    break ;
                }

            }
            if(!f)
            {
                pf("%d is not the sum of two primes!\n",n) ;
            }
        }
    }
    return 0;
}
