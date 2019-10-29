#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
struct data
{
    string s;
    int acc,spe,stu;
    data(string _s,int _acc,int _spe,int _stu)
    {
        s=_s;
        acc=_acc;
        spe=_spe;
        stu=_stu;
    }

};
bool comp(data A,data B)
{
    if(A.acc==B.acc)
    {
        if(A.spe==B.spe)
        {
            if(A.stu==B.stu)
            {
               return A.s<B.s;
            }
            return A.stu<B.stu;
        }
        return A.spe>B.spe;
    }
    return A.acc>B.acc;
}

int main()
{
    vector<data>vec;
    int n,i,acc,spe,stu;
    string s;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s>>acc>>spe>>stu;
        vec.push_back(data(s,acc,spe,stu));

    }
    sort(all(vec),comp);
    for(int i=0; i<n; i++)
        cout<<vec[i].s<<endl;

}
