#include<bits/stdc++.h>
using namespace std;
vector<long long>vec,vec1,vec2;

int main()
{
    long long n,i,j,k,t,r,rem,c,v,p,s,cnt;
    for(i=0; i<14; i++)
    {
        cin>>t;
        vec2.push_back(t);
    }

    for(i=0; i<=13; i++)
    {

        for (int m=0; m<=13; m++)
         vec1.push_back(vec2[m]);
        v=vec1[i];
        r=vec1[i]/14;
        c=0;
        cnt=0;
        vec1[i]=0;
        s=0;
        if(r>0)
        {
            for(j=i; c<14; j++)
            {
                //cout<<j%14<<' ';
                //return 0;
                vec1[j%14]=vec1[j%14]+r;
                c++;
                //cout<<j%14<<' '<<a[j%14]<<endl;
            }
        }

        //return 0;
        rem=v%14;
        //cout<<rem;
        if(rem>0)
        {
            for(k=i+1; cnt<rem; k++)
            {
                //cout<<k;return 0;
                vec1[k%14]=vec1[k%14]+1;
                //cout<<k%14<<' '<<a[k%14]<<endl;
                cnt++;
            }
        }
        //return 0;
        for(p=0; p<=13; p++)
        {
            cout<<vec1[p]<<' ';
            if(vec1[p]%2==0)
                s=s+vec1[p];
        }
        cout<<endl;
        //cout<<i<<' '<<s<<endl;
        vec.push_back(s);
       vec1.clear();


    }

    sort(vec.begin(),vec.end());
      cout<<vec[vec.size()-1];

}
