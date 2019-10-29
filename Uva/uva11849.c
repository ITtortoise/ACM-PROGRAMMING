// set_intersection example
#include<bits/stdc++.h>
using namespace std;

int main ()
{
//  int first[] = {5,10,15,20,25};
//  int second[] = {50,40,30,20,10};
    std::vector<int> v(10);                      // 0  0  0  0  0  0  0  0  0  0
    std::vector<int>::iterator it;
    int n,m,i,j;
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>first[i];
    for(i=0; i<m; i++)
        cin>>second[i];


    std::sort (first,first+5);     //  5 10 15 20 25
    std::sort (second,second+5);   // 10 20 30 40 50

    it=std::set_intersection (first, first+5, second, second+5, v.begin());
    // 10 20 0  0  0  0  0  0  0  0
    v.resize(it-v.begin());                      // 10 20

    std::cout << "The intersection has " << (v.size()) << " elements:\n";
    for (it=v.begin(); it!=v.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}