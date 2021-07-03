#include<bits/stdc++.h>
#include <vector>

#define white 0
#define gray -1
#define black -2
#define INT_MA 99999

using namespace std;

long long int arra[100001];
int n,m;


int check(int x)
{
    int a,b,temp;

    if(arra[x]==white)
    {
        arra[x]=gray;

        if (x==m){
                return 0;
                arra[x]=0;
        }
        else if (x>m)
        {
            temp=(x-m);
            arra[x]=temp;
            return temp;
        }
        else if (x<=0){
            return INT_MA;
        }
        else
        {
            if (arra[x*2]==white)
                a=check(x*2);
            else a=arra[x*2];
            if (a!=-1)
                a++;

            if (arra[x-1]==white)
                b=check(x-1);
            else b=arra[x-1];

            if (b!=-1)
                b++;

            //if (x==6)
               // cout<<"a="<<a<<" "<<"b="<<b<<endl;

            if (a!=-1 && b!=-1){
                if (a<b)
                    temp=a;
                else temp=b;
            }
            else if (b==-1 && a>b){
                    temp=a;
            }
            else if (a==-1 && b>a){
                    temp=b;
            }
            else temp=-1;
            arra[x]=temp;
            return temp;
        }
    }
    else if (arra[x]==gray)
    {
        return -1;
    }
    else if (arra[x]==black){
        return arra[x];
    }


}

int main()
{
    int x;
    cin>>n>>m;

    x=check(n);
    cout<<x<<endl;

    //for (int i=0;i<20;i++)
        //cout<<i<<" "<<arra[i]<<endl;

}
