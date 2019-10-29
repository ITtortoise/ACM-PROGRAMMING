#include<bits/stdc++.h>
using namespace std;
int main()
{

    int l,r,i,j,k=0,two=0,three=0,five=0,seven=0,max1,max2;
    cin>>l>>r;
    if(l==r)
      cout<<l<<endl;

    else
    {
        for(i=l; i<=r; i++)
        {
            if(i%2==0)
                two++;
            if(i%3==0)
                three++;
            if(i%5==0)
                five++;
            if(i%7==0)
                seven++;

        }
        cout<<two<<" "<<three<<" "<<five<<" "<<seven<<endl;
        if(two>=three)
        {
            if(two>=five)
            {
                if(two>=seven)
                    cout<<"2"<<endl;
            }
        }
        else if(three>=two)
        {
            if(three>=five)
            {
                if(three>=seven)
                    cout<<"3"<<endl;
            }
        }
        else if(five>=two)
        {
            if(five>=three)
            {
                if(five>=seven)
                    cout<<"5"<<endl;
            }
        }
        else if(seven>=two)
        {
            if(seven>=three)
            {
                if(seven>=five)
                    cout<<"7"<<endl;
            }
        }
    }

}
