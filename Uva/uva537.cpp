#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i,j,k,l,c=0,p,q;
    float a[2];
    string s,s2,s3,s4=" ";
    getline(cin,s);
    l=s.size();
    for(i=0; i<l; i++)
        if(s[i]=='=')
        {
            s2+=s[i-1];
            for(i=i+1; i<l; i++)
            {
                if((s[i]>='0'&&s[i]<='9')||s[i]=='.')
                    s3+=s[i];
                else
                {
                    //cout<<i<<"dgd";
                    break;
                }

            }
            //cout<<s3<<" ";
            a[c]=atof(s3.c_str());
            //printf("%.1f ",a[c]);
            c++;
            s3="";
            //

        }

    //cout<<s2<<endl;

    if((s2[0]=='U'||s2[0]=='I')&&(s2[1]=='U'||s2[1]=='I'))
        printf("P %.2f",a[0]*a[1]);
    else if(s2[0]=='p'||s2[1]=='I')
        printf("U %.2f",a[0]/a[1]);
    else if(s2[0]=='I'||s2[1]=='P')
        printf("U %.2f",a[1]/a[0]);
    else if(s2[0]=='p'||s2[1]=='U')
        printf("I %.2f",a[0]/a[1]);
    else if(s2[0]=='U'||s2[1]=='P')
        printf("I %.2f",a[1]/a[0]);



    return 0;


}

