#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1,x,y;
    cin>>x>>y;
    for(int i=1;i<=x;i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=y;j++)
                {cout<<"#";}
                cout<<endl;
        }

        if(i%2==0)
        {   c++;
            if(c%2==0)
            {
                for(int m=1;m<y;m++)
                {cout<<".";}
                cout<<"#"<<endl;
            }
            else if(c%2!=0)
            {
                cout<<"#";
                for(int m=1;m<y;m++)
                {cout<<".";}
                cout<<endl;

            }


        }
    }
}

