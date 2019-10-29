/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
using namespace std;

int n,k,i,j,cnt=0,t;
string s,s1,s2,s3,s4;
int main()
{
    cin>>s1>>s2>>n;
    s4=s2;
    for(t=0;t<n;t++)
    {

        cin>>s3;
        int f=0;

        for(k=0; k<s2.size(); k++)
        {
            if(s2[k]=='*')
            {
                s2.erase(s2.begin()+k);
                //cout<<s2<<k<<endl;
                for(i=k; i<s3.size(); i++)
                {
                    if(s1.find(s3[i])==-1)
                        cnt++;
                    else
                        break;
                }
                if(cnt>0)
                s3.erase(k,cnt);

            }

        }
        //cout<<s3<<endl;


        if(s2.size()!=s3.size()||s2=="")
        {
            cout<<"NO"<<endl;
            f=1;
        }
        else if(s2.size()==s3.size())
        {
            for(i=0; i<s2.size(); i++)
            {
                if(s2[i]=='?')
                {
                    if(s1.find(s3[i])==-1)
                    {
                        cout<<"NO"<<endl;
                        f=1;
                        break;
                    }
                }
                else if(s2[i]!=s3[i])
                {
                    cout<<"NO"<<endl;
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
            cout<<"YES"<<endl;


            s3="";
            s2="";
            s2=s4;
    }




    return 0;
}

