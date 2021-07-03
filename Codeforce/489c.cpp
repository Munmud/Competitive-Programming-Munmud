#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int m,s,temp=0,i,xDigit,len,zeroCount=0;

    cin>>m>>s;
    if (s==0 && m!=1){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }

    for (i=1;;i++)
    {
        temp+=9;
        if(s<=temp){
            xDigit=9-temp+s;
            break;
        }
    }
    len=i;
    //cout<<len<<" "<<xDigit<<endl;
    if (len>m){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }

    zeroCount=m-len;
    if (xDigit>1 && zeroCount){
        xDigit--;
        zeroCount--;
        cout<<1;

        for(i=1;i<=zeroCount;i++)
            cout<<0;
            cout<<xDigit;
        for(i=1;i<=len-1;i++)
            cout<<9;
        zeroCount++;
        xDigit++;
    }
    else {
        cout<<xDigit;
        for(i=1;i<=zeroCount;i++)
            cout<<0;
        for(i=1;i<=len-1;i++)
            cout<<9;
    }


    cout<<" ";

    for(i=1;i<=len-1;i++)
        cout<<9;
    cout<<xDigit;
    for(i=1;i<=zeroCount;i++)
        cout<<0;


}
