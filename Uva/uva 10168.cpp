#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#define M 100000000
using namespace std;
bool prime[M];
int main()
{
    prime[1]=prime[0]=1;
    for(int i = 2; i <= sqrt(M); i++)
        if(prime[i] == 0)
            for(int j = i+i; j <= M; j += i+i)
                prime[j] = 1;

    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        int m = 0, x, y;
        if(n<4||!prime[n])
            cout<<n << " is not the sum of two primes!" << endl;
        else
        {

            for(int j = 2; j < n; j++)
                if(!prime[j] && !prime[n-j])
                {
                    x = j;
                    y = (n-j);
                    m = 1;
                    break;
                }
            if(m)
                cout <<n<<" is the sum of "<<x<<" and "<<y<<endl;
        }
    }

    return 0;
}
