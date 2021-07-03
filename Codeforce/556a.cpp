#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main ()
{
    int n,x=0,y=0,min;
    char *p;

    cin>>n;

    p=new char[n+1];
    cin>>p;

    for (int i=0;i<n;i++){
        if (p[i]=='1')
            x++;
        else y++;
    }
    //cout<<x<<y<<endl;

    min=abs(x-y);
    cout<<min<<endl;


}
