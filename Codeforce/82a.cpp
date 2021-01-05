#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,t=1,x,ans,star=0,nextStar;
    cin>>n;


    if (n>=1 && n<=5){
            //cout<<1;
        if (n==1)
        cout<<"Sheldon"<<endl;
    else if (n==2)
        cout<<"Leonard"<<endl;
    else if (n==3)
        cout<<"Penny"<<endl;
    else if (n==4)
        cout<<"Rajesh"<<endl;
    else
        cout<<"Howard"<<endl;
        return 0;
    }

    while(1){
            nextStar=star+t*5;
        if (nextStar>=n){
                //star-=(t/2)*5;
       // t/=2;
            break;
        }
        else{
                star+=t*5;
            t*=2;
        }
    }
    //cout<< star<<" "<<t<<endl;

    ans=(n-star)/t;
    //cout<<ans<<endl;

    if (ans==0)
        cout<<"Sheldon"<<endl;
    else if (ans==1)
        cout<<"Leonard"<<endl;
    else if (ans==2)
        cout<<"Penny"<<endl;
    else if (ans==3)
        cout<<"Rajesh"<<endl;
    else if (ans==4)
        cout<<"Howard"<<endl;



}
